echo 'Creating input file'
#Cut off the ending of the file
head -176 $1 > voxelyzeInputFromCPPN.vxa
echo '<X_Voxels>10</X_Voxels>' >> voxelyzeInputFromCPPN.vxa
echo '<Y_Voxels>21</Y_Voxels>' >> voxelyzeInputFromCPPN.vxa
echo '<Z_Voxels>10</Z_Voxels>' >> voxelyzeInputFromCPPN.vxa
echo '<Data>' >> voxelyzeInputFromCPPN.vxa
for x in 181 182 183 184 185 186 187 188 189 190
do
{
	pop1=""
	#Add pop1 data
	pop1=$(sed -n ${x}','${x}'p' $1 | awk '{sub(/].*/,""); print}')

	#Add Buffer
	buffer='0000000000'

	#Add pop2 data'
	pop2=$(sed -n ${x}','${x}'p' $2 | awk '{sub(/<Layer><\!\[CDATA\[/,""); print}')

	echo $pop1$buffer$pop2 >> voxelyzeInputFromCPPN.vxa
}
done

tail -4 $2 >> voxelyzeInputFromCPPN.vxa
		

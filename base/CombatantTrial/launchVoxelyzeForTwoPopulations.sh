#!/bin/bash
# This script is used to constantly check if both voxelyzeInputFromPopulationX.vxa files exist,
# and then calls voxelyze on those two vxa files to have them compete.
# Currently, to exit the script, you either ^C it, or run the command "touch endflag" in the root directory.


rootDir='/home/heinmr/Documents/softbotEvolution/base/CombatantTrial/'
cd ${rootDir}

while 	true;
do {
	if [ -e Pop1/voxelyzeInputFromPopulation1.vxa ] && [ -e Pop2/voxelyzeInputFromPopulation2.vxa ];
	then
		rm voxelyzeInputFromCPPN.vxa
		echo 'Creating input file'
		#Cut off the ending of the file
		head -176 Pop1/voxelyzeInputFromPopulation1.vxa > voxelyzeInputFromCPPN.vxa
		echo '<X_Voxels>10</X_Voxels>' >> voxelyzeInputFromCPPN.vxa
		echo '<Y_Voxels>23</Y_Voxels>' >> voxelyzeInputFromCPPN.vxa
		echo '<Z_Voxels>10</Z_Voxels>' >> voxelyzeInputFromCPPN.vxa
		echo '<Data>' >> voxelyzeInputFromCPPN.vxa
		for x in 181 182 183 184 185 186 187 188 189 190
		do
		{
			pop1=""
			#Add pop1 data
			pop1=$(sed -n ${x}','${x}'p' Pop1/voxelyzeInputFromPopulation1.vxa | awk '{sub(/].*/,""); print}')
	
			#Add Buffer
			buffer='000000000000000000000000000000'

			#Add pop2 data'
			pop2=$(sed -n ${x}','${x}'p' Pop2/voxelyzeInputFromPopulation2.vxa | awk '{sub(/<Layer><\!\[CDATA\[/,""); print}')
	
			echo $pop1$buffer$pop2 >> voxelyzeInputFromCPPN.vxa
		}
		done
		
		tail -4 Pop2/voxelyzeInputFromPopulation2.vxa >> voxelyzeInputFromCPPN.vxa
		
		echo 'Starting voxelyze...'
		./voxelyze -f voxelyzeInputFromCPPN.vxa
		
		echo 'waiting for voxelyze output...'
		while [ ! -f softbotsOutput1.xml ] || [ ! -f softbotsOutput2.xml ];
		do {
			sleep 1
		} done

		echo 'moving output to respective folders...'
		mv softbotsOutput1.xml Pop1/softbotsOutput1.xml
		mv softbotsOutput2.xml Pop2/softbotsOutput2.xml
		
		sleep 3
	fi
	if test -e endflag;
	then
		exit
	fi
}
done

# This script is used to constantly check if both voxelyzeInputFromPopulationX.vxa files exist,
# and then calls voxelyze on those two vxa files to have them compete.
# Currently, to exit the script, you either ^C it, or run the command "touch endflag" in the root directory.


rootDir='/home/heinmr/Documents/softbotEvolution/base/TestTwoPopulations/'
cd ${rootDir}

while 	true;
do {
	if test -e voxelyzeInputFromPopulation1.vxa & test -e voxelyzeInputFromPopulation2.vxa;
	then
		echo 'Creating input file'
		#Cut off the ending of the file
		head -189 voxelyzeInputFromPopulation1.vxa > voxelyzeInputFromCPPN.vxa

		# Combine the two files together into one file
		echo 'Combining voxelyze arrays'

		#Put the buffer in
		echo '<Layer><![CDATA[0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000]]></Layer>' >> voxelyzeInputFromCPPN.vxa
		echo '<Layer><![CDATA[0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000]]></Layer>' >> voxelyzeInputFromCPPN.vxa
		echo '<Layer><![CDATA[0000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000000]]></Layer>' >> voxelyzeInputFromCPPN.vxa

		#Take the last lines (creature + ending) of second file
		sed -n '180,193p' voxelyzeInputFromPopulation2.vxa >> test.vxa

		./voxelyze -f voxelyzeInputFromCPPN.vxa
		
		rm voxelyzeInputFromPopulation1.vxa
		rm voxelyzeInputFromPopulation2.vxa
	fi
	if test -e endflag;
	then
		exit
	fi
}
done

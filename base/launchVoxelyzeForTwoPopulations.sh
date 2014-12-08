# This script is used to constantly check if both voxelyzeInputFromPopulationX.vxa files exist,
# and then calls voxelyze on those two vxa files to have them compete.
# Currently, to exit the script, you either ^C it, or run the command "touch endflag" in the root directory.


rootDir='/home/heinmr/Documents/softbotEvolution/base/TestTwoPopulations/'
cd ${rootDir}

while 	true;
do {
	if test -e voxelyzeInputFromPopulation1.vxa & test -e voxelyzeInputFromPopulation1.vxa;
	then
		./voxelyze -f voxelyzeInputFromPopulation1.vxa;
		./voxelyze -f voxelyzeInputFromPopulation2.vxa; 
		# ./voxelyze -f voxelyzeInputFromPopulation1.vxa -g voxelyzeInputFromPopulation2.vxa
	fi
	if test -e endflag;
	then
		exit
	fi
}
done

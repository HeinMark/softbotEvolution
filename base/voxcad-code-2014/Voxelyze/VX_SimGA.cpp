/*******************************************************************************
Copyright (c) 2010, Jonathan Hiller (Cornell University)
If used in publication cite "J. Hiller and H. Lipson "Dynamic Simulation of Soft Heterogeneous Objects" In press. (2011)"

This file is part of Voxelyze.
Voxelyze is free software: you can redistribute it and/or modify it under the terms of the GNU Lesser General Public License as published by the Free Software Foundation, either version 3 of the License, or (at your option) any later version.
Voxelyze is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU Lesser General Public License for more details.
See <http://www.opensource.org/licenses/lgpl-3.0.html> for license details.
*******************************************************************************/

#include "VX_SimGA.h"

CVX_SimGA::CVX_SimGA()
{
	std::cout << "Started SimGA" << std::endl;
	Fitness = 0.0f;
	TrackVoxel = 0;
	FitnessFileName = "";
//	print_scrn = false;
	WriteFitnessFile = false;
	FitnessType = FT_NONE;	//no reporting is default

}

void CVX_SimGA::SaveResultFile(std::string filename)
{
	// For now, the dirty solution (it should parse the filename and add 1 or 2 to it)
	CXML_Rip XML1;
	WriteResultFile(&XML1, 1);
	XML1.SaveFile("softbotsOutput1.xml");

	CXML_Rip XML2;
	WriteResultFile(&XML2, 2);
	XML2.SaveFile("softbotsOutput1.xml");
}


void CVX_SimGA::WriteResultFile(CXML_Rip* pXML, int population)
{
	
	pXML->DownLevel("Voxelyze_Sim_Result");
	pXML->SetElAttribute("Version", "1.0");
	pXML->DownLevel("Fitness");
	// pXML->Element("FinalCOM_Dist", SS.CurCM.Normalize()-IniCM.Normalize());
	if (population == 1){
		pXML->Element("FinalCOM_DistX", SS.CurCM1.x-IniCM1.x);
		pXML->Element("FinalCOM_DistY", SS.CurCM1.y-IniCM1.y);
		pXML->Element("FinalCOM_DistZ", SS.CurCM1.z-IniCM1.z);
	} else {
		pXML->Element("FinalCOM_DistX", SS.CurCM2.x-IniCM2.x);
		pXML->Element("FinalCOM_DistY", SS.CurCM2.y-IniCM2.y);
		pXML->Element("FinalCOM_DistZ", SS.CurCM2.z-IniCM2.z);
	}
	pXML->UpLevel();
	pXML->UpLevel();

}


void CVX_SimGA::WriteAdditionalSimXML(CXML_Rip* pXML)
{
	pXML->DownLevel("GA");
		pXML->Element("Fitness", Fitness);
		pXML->Element("FitnessType", (int)FitnessType);
		pXML->Element("TrackVoxel", TrackVoxel);
		pXML->Element("FitnessFileName", FitnessFileName);
		pXML->Element("WriteFitnessFile", WriteFitnessFile);
	pXML->UpLevel();
}

bool CVX_SimGA::ReadAdditionalSimXML(CXML_Rip* pXML, std::string* RetMessage)
{
	if (pXML->FindElement("GA")){
		int TmpInt;
		if (!pXML->FindLoadElement("Fitness", &Fitness)) Fitness = 0;
		if (pXML->FindLoadElement("FitnessType", &TmpInt)) FitnessType=(FitnessTypes)TmpInt; else Fitness = 0;
		if (!pXML->FindLoadElement("TrackVoxel", &TrackVoxel)) TrackVoxel = 0;
		if (!pXML->FindLoadElement("FitnessFileName", &FitnessFileName)) FitnessFileName = "";
		if (!pXML->FindLoadElement("WriteFitnessFile", &WriteFitnessFile)) WriteFitnessFile = true;
		pXML->UpLevel();
	}

	return true;
}

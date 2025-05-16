/*********************************************************************************
 * 
 *                       ELECTRONICA II UTN - FRRO                                *
 * 
 * *******************************************************************************/

//===================[File header]================================================
// File:                app.cpp
// Author:              Marcelo Castello (https://github.com/mcastellogh)
// Licence:             GPLV3+
// Version:             1.0.0
// Date:                Mayo 2025
// Info:                Project 'analog_measures' for Electrónica II

//====================[Use & storage]============================================
// PCB:                 PCB_UTN
// Plataforma:          ESP32S3  
// Use:                 analog measures
// Folder:              PCB_analog_measure
// Proyect name:        PCB_analog_measure

//====================[ToDo]=====================================================     
//        
//
//
//====================[Bugs]=====================================================     
//     
//                   
//
//====================[Commits]==================================================     
//
// Last commit:
//
//===================[End file header]===========================================


//--Includes
#include "app.h"

//--Local variables
Data * dataToPush;

//--Main application
void App_loop(void){
    dataToPush=measure_loop();
    if(dataToPush[MV].procesed){
        dataToPush[MV].procesed=false;
    }
    if(dataToPush[TEMP_EXT].procesed){
        dataToPush[TEMP_EXT].procesed=false;
    }
}
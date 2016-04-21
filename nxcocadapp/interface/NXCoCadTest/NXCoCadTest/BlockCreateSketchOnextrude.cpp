//==============================================================================
//  WARNING!!  This file is overwritten by the Block UI Styler while generating
//  the automation code. Any modifications to this file will be lost after
//  generating the code again.
//
//       Filename:  C:\Users\Administrator\Desktop\vs\menu_block\BlockCreateSketchOnextrude.cpp
//
//        This file was generated by the NX Block UI Styler
//        Created by: Administrator
//              Version: NX 8.5
//              Date: 04-21-2016  (Format: mm-dd-yyyy)
//              Time: 16:33 (Format: hh-mm)
//
//==============================================================================

//==============================================================================
//  Purpose:  This TEMPLATE file contains C++ source to guide you in the
//  construction of your Block application dialog. The generation of your
//  dialog file (.dlx extension) is the first step towards dialog construction
//  within NX.  You must now create a NX Open application that
//  utilizes this file (.dlx).
//
//  The information in this file provides you with the following:
//
//  1.  Help on how to load and display your Block UI Styler dialog in NX
//      using APIs provided in NXOpen.BlockStyler namespace
//  2.  The empty callback methods (stubs) associated with your dialog items
//      have also been placed in this file. These empty methods have been
//      created simply to start you along with your coding requirements.
//      The method name, argument list and possible return values have already
//      been provided for you.
//==============================================================================

//------------------------------------------------------------------------------
//These includes are needed for the following template code
//------------------------------------------------------------------------------
#include "BlockCreateSketchOnextrude.hpp"
#include <NXOPen/NXString.hxx>
#include "NXFunction.h"
using namespace NXOpen;
using namespace NXOpen::BlockStyler;

//------------------------------------------------------------------------------
// Initialize static variables
//------------------------------------------------------------------------------
Session *(BlockCreateSketchOnextrude::theSession) = NULL;
UI *(BlockCreateSketchOnextrude::theUI) = NULL;
//------------------------------------------------------------------------------
// Constructor for NX Styler class
//------------------------------------------------------------------------------
BlockCreateSketchOnextrude::BlockCreateSketchOnextrude()
{
    try
    {
        // Initialize the NX Open C++ API environment
        BlockCreateSketchOnextrude::theSession = NXOpen::Session::GetSession();
        BlockCreateSketchOnextrude::theUI = UI::GetUI();
        theDlxFileName = "D:\\xietongkuangjia3\\nxcocadapp_cp1\\interface\\NXCoCadTest\\NXCoCadTest\\BlockCreateSketchOnextrude.dlx";
        theDialog = BlockCreateSketchOnextrude::theUI->CreateDialog(theDlxFileName);
        // Registration of callback functions
        theDialog->AddApplyHandler(make_callback(this, &BlockCreateSketchOnextrude::apply_cb));
        theDialog->AddOkHandler(make_callback(this, &BlockCreateSketchOnextrude::ok_cb));
        theDialog->AddUpdateHandler(make_callback(this, &BlockCreateSketchOnextrude::update_cb));
        theDialog->AddInitializeHandler(make_callback(this, &BlockCreateSketchOnextrude::initialize_cb));
        theDialog->AddDialogShownHandler(make_callback(this, &BlockCreateSketchOnextrude::dialogShown_cb));
    }
    catch(exception& ex)
    {
        //---- Enter your exception handling code here -----
        throw;
    }
}

//------------------------------------------------------------------------------
// Destructor for NX Styler class
//------------------------------------------------------------------------------
BlockCreateSketchOnextrude::~BlockCreateSketchOnextrude()
{
    if (theDialog != NULL)
    {
        delete theDialog;
        theDialog = NULL;
    }
}



int BlockCreateSketchOnextrude::Show()
{
    try
    {
        theDialog->Show();
    }
    catch(exception& ex)
    {
        //---- Enter your exception handling code here -----
        BlockCreateSketchOnextrude::theUI->NXMessageBox()->Show("Block Styler", NXOpen::NXMessageBox::DialogTypeError, ex.what());
    }
    return 0;
}

//------------------------------------------------------------------------------
//---------------------Block UI Styler Callback Functions--------------------------
//------------------------------------------------------------------------------

//------------------------------------------------------------------------------
//Callback Name: initialize_cb
//------------------------------------------------------------------------------
void BlockCreateSketchOnextrude::initialize_cb()
{
    try
    {
        group0 = dynamic_cast<NXOpen::BlockStyler::Group*>(theDialog->TopBlock()->FindBlock("group0"));
        integer0 = dynamic_cast<NXOpen::BlockStyler::IntegerBlock*>(theDialog->TopBlock()->FindBlock("integer0"));
        string0 = dynamic_cast<NXOpen::BlockStyler::StringBlock*>(theDialog->TopBlock()->FindBlock("string0"));
        string01 = dynamic_cast<NXOpen::BlockStyler::StringBlock*>(theDialog->TopBlock()->FindBlock("string01"));
        button0 = dynamic_cast<NXOpen::BlockStyler::Button*>(theDialog->TopBlock()->FindBlock("button0"));
    }
    catch(exception& ex)
    {
        //---- Enter your exception handling code here -----
        BlockCreateSketchOnextrude::theUI->NXMessageBox()->Show("Block Styler", NXOpen::NXMessageBox::DialogTypeError, ex.what());
    }
}

//------------------------------------------------------------------------------
//Callback Name: dialogShown_cb
//This callback is executed just before the dialog launch. Thus any value set 
//here will take precedence and dialog will be launched showing that value. 
//------------------------------------------------------------------------------
void BlockCreateSketchOnextrude::dialogShown_cb()
{
    try
    {
        //---- Enter your callback code here -----
    }
    catch(exception& ex)
    {
        //---- Enter your exception handling code here -----
        BlockCreateSketchOnextrude::theUI->NXMessageBox()->Show("Block Styler", NXOpen::NXMessageBox::DialogTypeError, ex.what());
    }
}

//------------------------------------------------------------------------------
//Callback Name: apply_cb
//------------------------------------------------------------------------------
int BlockCreateSketchOnextrude::apply_cb()
{
    int errorCode = 0;
    try
    {
        //---- Enter your callback code here -----
    }
    catch(exception& ex)
    {
        //---- Enter your exception handling code here -----
        errorCode = 1;
        BlockCreateSketchOnextrude::theUI->NXMessageBox()->Show("Block Styler", NXOpen::NXMessageBox::DialogTypeError, ex.what());
    }
    return errorCode;
}

//------------------------------------------------------------------------------
//Callback Name: update_cb
//------------------------------------------------------------------------------


int BlockCreateSketchOnextrude::update_cb(NXOpen::BlockStyler::UIBlock* block)
{
    try
    {
        if(block == integer0)
        {
        //---------Enter your code here-----------
        }
        else if(block == string0)
        {
        //---------Enter your code here-----------
        }
        else if(block == string01)
        {
        //---------Enter your code here-----------
        }
        else if(block == button0)
		{
			int id = integer0->Value();
			NXString edge = string0->Value();
			NXString face = string01->Value();
			//BlockCreateSketchOnextrude::theUI->NXMessageBox()->Show("Block Styler", NXOpen::NXMessageBox::DialogTypeError, edge.getText());
			createSketchOnExtrude(id,edge.getText(),face.getText());	
        
        //---------Enter your code here-----------
        }
    }
    catch(exception& ex)
    {
        //---- Enter your exception handling code here -----
        BlockCreateSketchOnextrude::theUI->NXMessageBox()->Show("Block Styler", NXOpen::NXMessageBox::DialogTypeError, ex.what());
    }
    return 0;
}

//------------------------------------------------------------------------------
//Callback Name: ok_cb
//------------------------------------------------------------------------------
int BlockCreateSketchOnextrude::ok_cb()
{
    int errorCode = 0;
    try
    {
        errorCode = apply_cb();
    }
    catch(exception& ex)
    {
        //---- Enter your exception handling code here -----
        errorCode = 1;
        BlockCreateSketchOnextrude::theUI->NXMessageBox()->Show("Block Styler", NXOpen::NXMessageBox::DialogTypeError, ex.what());
    }
    return errorCode;
}

//------------------------------------------------------------------------------
//Function Name: GetBlockProperties
//Description: Returns the propertylist of the specified BlockID
//------------------------------------------------------------------------------
PropertyList* BlockCreateSketchOnextrude::GetBlockProperties(const char *blockID)
{
    return theDialog->GetBlockProperties(blockID);
}
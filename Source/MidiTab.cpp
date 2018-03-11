/*
  ==============================================================================

  This is an automatically generated GUI class created by the Projucer!

  Be careful when adding custom code to these files, as only the code within
  the "//[xyz]" and "//[/xyz]" sections will be retained when the file is loaded
  and re-saved.

  Created with Projucer version: 5.2.0

  ------------------------------------------------------------------------------

  The Projucer is part of the JUCE library - "Jules' Utility Class Extensions"
  Copyright (c) 2015 - ROLI Ltd.

  ==============================================================================
*/

//[Headers] You can add your own extra header files here...

#include "LoopTab.h"

//[/Headers]

#include "MidiTab.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
MidiTab::MidiTab ()
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]

    addAndMakeVisible (label = new Label ("new label",
                                          TRANS("MIDI OUT:")));
    label->setFont (Font (15.00f, Font::plain).withTypefaceStyle ("Regular"));
    label->setJustificationType (Justification::centredLeft);
    label->setEditable (false, false, false);
    label->setColour (TextEditor::textColourId, Colours::black);
    label->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (midiBox = new ComboBox ("port combo box"));
    midiBox->setEditableText (false);
    midiBox->setJustificationType (Justification::centredLeft);
    midiBox->setTextWhenNothingSelected (String());
    midiBox->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    midiBox->addListener (this);

    addAndMakeVisible (connectButton = new TextButton ("connect button"));
    connectButton->setButtonText (TRANS("Connect"));
    connectButton->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    connectButton->addListener (this);

    addAndMakeVisible (scanButton = new TextButton ("scan button"));
    scanButton->setButtonText (TRANS("ReScan"));
    scanButton->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    scanButton->addListener (this);

    addAndMakeVisible (label2 = new Label ("new label",
                                           TRANS("robertsonics")));
    label2->setFont (Font (40.00f, Font::plain).withTypefaceStyle ("Regular"));
    label2->setJustificationType (Justification::centredLeft);
    label2->setEditable (false, false, false);
    label2->setColour (Label::textColourId, Colour (0xff007bff));
    label2->setColour (TextEditor::textColourId, Colours::black);
    label2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label3 = new Label ("new label",
                                           TRANS("LoopControl v0.13")));
    label3->setFont (Font (18.00f, Font::plain).withTypefaceStyle ("Regular"));
    label3->setJustificationType (Justification::centredLeft);
    label3->setEditable (false, false, false);
    label3->setColour (TextEditor::textColourId, Colours::black);
    label3->setColour (TextEditor::backgroundColourId, Colour (0x00000000));


    //[UserPreSize]
    //[/UserPreSize]

    setSize (600, 400);


    //[Constructor] You can add your own custom stuff here..

	// Preset the "Connect" button to disabled and then only enable it
	//  if the BluetoothMidiDevicePairingdialogue is available
	connectButton->setEnabled(false);
	if (BluetoothMidiDevicePairingDialogue::isAvailable())
		connectButton->setEnabled(true);

    //[/Constructor]
}

MidiTab::~MidiTab()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    label = nullptr;
    midiBox = nullptr;
    connectButton = nullptr;
    scanButton = nullptr;
    label2 = nullptr;
    label3 = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void MidiTab::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colours::black);

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void MidiTab::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    label->setBounds (39, 228, 79, 24);
    midiBox->setBounds (120, 223, 216, 36);
    connectButton->setBounds (100, 135, 68, 40);
    scanButton->setBounds (228, 136, 68, 40);
    label2->setBounds (85, 24, 221, 48);
    label3->setBounds (117, 72, 156, 24);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void MidiTab::comboBoxChanged (ComboBox* comboBoxThatHasChanged)
{
    //[UsercomboBoxChanged_Pre]
    //[/UsercomboBoxChanged_Pre]

    if (comboBoxThatHasChanged == midiBox)
    {
        //[UserComboBoxCode_midiBox] -- add your combo box handling code here..

		setMidiOutput(midiBox->getSelectedItemIndex());

        //[/UserComboBoxCode_midiBox]
    }

    //[UsercomboBoxChanged_Post]
    //[/UsercomboBoxChanged_Post]
}

void MidiTab::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]
    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == connectButton)
    {
        //[UserButtonCode_connectButton] -- add your button handler code here..

		// If enabled, open the Bluetooth connect dialog
		RuntimePermissions::request(RuntimePermissions::bluetoothMidi,
			[](bool wasGranted) { if (wasGranted) BluetoothMidiDevicePairingDialogue::open(); });

        //[/UserButtonCode_connectButton]
    }
    else if (buttonThatWasClicked == scanButton)
    {
        //[UserButtonCode_scanButton] -- add your button handler code here..

		// Clear and repopulate the MIDI Output box with currently available
		//  devices
		midiBox->clear();
		midiBox->setTextWhenNoChoicesAvailable("No MIDI OUT Devices!");
		const StringArray midiOutputs(MidiOutput::getDevices());
		if (midiOutputs.size() > 0) {
			midiBox->addItemList(midiOutputs, 1);
		}
		else {
			midiBox->addItem("No MIDI OUT Devices!", 1);
			midiBox->setSelectedId(1);
		}

        //[/UserButtonCode_scanButton]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...

// ******************************************************************
//  sendLoopVol
// ******************************************************************
void MidiTab::sendLoopVol(int l, int v)
{
	if (l > NUM_LOOPS)
		return;
	sendNRPN14((l << 4) + CMD_OFFSET_VOLUME, v);
}

// ******************************************************************
//  sendLoopPitch
// ******************************************************************
void MidiTab::sendLoopPitch(int l, int v)
{
	if (l > NUM_LOOPS)
		return;

	sendNRPN14((l << 4) + CMD_OFFSET_PITCH, v);
}

// ******************************************************************
//  sendLoopSpeed
// ******************************************************************
void MidiTab::sendLoopSpeed(int l, int v)
{
	if (l > NUM_LOOPS)
		return;
	sendNRPN14((l << 4) + CMD_OFFSET_SPEED, v);
}

// ******************************************************************
//  sendLoopStart
// ******************************************************************
void MidiTab::sendLoopStart(int l, int v)
{
	if (l > NUM_LOOPS)
		return;
	sendNRPN14((l << 4) + CMD_OFFSET_START, v);
}

// ******************************************************************
//  sendLoopLen
// ******************************************************************
void MidiTab::sendLoopLen(int l, int v)
{
	if (l > NUM_LOOPS)
		return;
	sendNRPN14((l << 4) + CMD_OFFSET_LENGTH, v);
}

// ******************************************************************
//  sendLoopDivide
// ******************************************************************
void MidiTab::sendLoopDivide(int l, int v)
{
	if (l > NUM_LOOPS)
		return;
	sendNRPN14((l << 4) + CMD_OFFSET_DIVIDE, v);
}

// ******************************************************************
//  sendLoopBalance
// ******************************************************************
void MidiTab::sendLoopBalance(int l, int v)
{
	if (l > NUM_LOOPS)
		return;
	sendNRPN14((l << 4) + CMD_OFFSET_BALANCE, v);
}

// ******************************************************************
//  sendLoopOutput
// ******************************************************************
void MidiTab::sendLoopOutput(int l, int v)
{
	if (l > NUM_LOOPS)
		return;
	sendNRPN14((l << 4) + CMD_OFFSET_OUTPUT, v);
}

// ******************************************************************
//  sendLoopSyncFlag
// ******************************************************************
void MidiTab::sendLoopSyncFlag(int l, bool s)
{
	if (l > NUM_LOOPS)
		return;
	if (s)
		sendNRPN14((l << 4) + CMD_OFFSET_SYNC, 1);
	else
		sendNRPN14((l << 4) + CMD_OFFSET_SYNC, 0);
}

// ******************************************************************
//  loadLoop
// ******************************************************************
void MidiTab::loadLoop(int l, int t)
{
	if (l > NUM_LOOPS)
		return;
	sendNRPN14((l << 4) + CMD_OFFSET_LOAD, t);
}

// ******************************************************************
//  playLoop
// ******************************************************************
void MidiTab::playLoop(int l)
{
	if (l > NUM_LOOPS)
		return;
	sendNRPN14((l << 4) + CMD_OFFSET_PLAY, 1);
}

// ******************************************************************
//  stopLoop
// ******************************************************************
void MidiTab::stopLoop(int l)
{
	if (l > NUM_LOOPS)
		return;
	sendNRPN14((l << 4) + CMD_OFFSET_STOP, 1);
}

// ******************************************************************
//  resetLoop
// ******************************************************************
void MidiTab::resetLoop(int l)
{
	if (l > NUM_LOOPS)
		return;
	sendNRPN14((l << 4) + CMD_OFFSET_RESET, 1);
}

// ******************************************************************
//  sendStopAll
// ******************************************************************
void MidiTab::sendStopAll()
{
	sendNRPN14(0xf0, 1);
}

// ******************************************************************
//  sendNRPN14
// ******************************************************************
void MidiTab::sendNRPN14(int p, int v)
{
	if (currentMidiOutput == nullptr)
		return;

	MidiMessage m = MidiMessage::controllerEvent(1, 98, p & 0x7f);
	currentMidiOutput->sendMessageNow(m);
	m = MidiMessage::controllerEvent(1, 6, (int8_t)((v >> 7) & 0x7f));
	currentMidiOutput->sendMessageNow(m);
	m = MidiMessage::controllerEvent(1, 38, (int8_t)(v & 0x7f));
	currentMidiOutput->sendMessageNow(m);

	//MidiBuffer buffer = MidiRPNGenerator::generate(1, 98, v, true, true);
	//if (currentMidiOutput != nullptr)
	//	currentMidiOutput->sendBlockOfMessagesNow(buffer);
}

// ******************************************************************
//  sendNRPN7
// ******************************************************************
void MidiTab::sendNRPN7(int p, int v)
{
	if (currentMidiOutput == nullptr)
		return;

	MidiMessage m = MidiMessage::controllerEvent(1, 98, p & 0x7f);
	currentMidiOutput->sendMessageNow(m);
	m = MidiMessage::controllerEvent(1, 38, (int8_t)(v & 0x7f));
	currentMidiOutput->sendMessageNow(m);
}

// ******************************************************************
//  setMidiInput
// ******************************************************************
void MidiTab::setMidiInput(int index)
{
	const StringArray list(MidiInput::getDevices());

	deviceManager.removeMidiInputCallback(list[lastInputIndex], this);

	const String newInput(list[index]);

	if (!deviceManager.isMidiInputEnabled(newInput))
		deviceManager.setMidiInputEnabled(newInput, true);

	deviceManager.addMidiInputCallback(newInput, this);
	midiBox->setSelectedId(index + 1, dontSendNotification);

	lastInputIndex = index;
}

// ******************************************************************
//  setMidiOutput
// ******************************************************************
void MidiTab::setMidiOutput(int index)
{
	currentMidiOutput = nullptr;
	if (MidiOutput::getDevices()[index].isNotEmpty())
	{
		currentMidiOutput = MidiOutput::openDevice(index);
		jassert(currentMidiOutput);
	}
}

// ******************************************************************
//  handleIncomingMidiMessage
// ******************************************************************
void MidiTab::handleIncomingMidiMessage(MidiInput *source, const MidiMessage &message)
{

	int n;
	String s;

	if (message.isNoteOn()) {
		n = message.getNoteNumber();
	}
	else if (message.isNoteOff()) {
		n = message.getNoteNumber();
	}
	else if (message.isPitchWheel()) {
		n = message.getPitchWheelValue();
	}

}

//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="MidiTab" componentName=""
                 parentClasses="public Component, private MidiInputCallback" constructorParams=""
                 variableInitialisers="" snapPixels="8" snapActive="1" snapShown="1"
                 overlayOpacity="0.330" fixedSize="0" initialWidth="600" initialHeight="400">
  <BACKGROUND backgroundColour="ff000000"/>
  <LABEL name="new label" id="152eb47562bda53f" memberName="label" virtualName=""
         explicitFocusOrder="0" pos="39 228 79 24" edTextCol="ff000000"
         edBkgCol="0" labelText="MIDI OUT:" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="15"
         kerning="0" bold="0" italic="0" justification="33"/>
  <COMBOBOX name="port combo box" id="9dbf0ebc08288493" memberName="midiBox"
            virtualName="" explicitFocusOrder="0" pos="120 223 216 36" editable="0"
            layout="33" items="" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <TEXTBUTTON name="connect button" id="f9a1a99854fb6e72" memberName="connectButton"
              virtualName="" explicitFocusOrder="0" pos="100 135 68 40" buttonText="Connect"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="scan button" id="e2570deb96e8d2a4" memberName="scanButton"
              virtualName="" explicitFocusOrder="0" pos="228 136 68 40" buttonText="ReScan"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <LABEL name="new label" id="c4d99860a51636a7" memberName="label2" virtualName=""
         explicitFocusOrder="0" pos="85 24 221 48" textCol="ff007bff"
         edTextCol="ff000000" edBkgCol="0" labelText="robertsonics" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="40" kerning="0" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="ffcb75235125e11f" memberName="label3" virtualName=""
         explicitFocusOrder="0" pos="117 72 156 24" edTextCol="ff000000"
         edBkgCol="0" labelText="LoopControl v0.13" editableSingleClick="0"
         editableDoubleClick="0" focusDiscardsChanges="0" fontname="Default font"
         fontsize="18" kerning="0" bold="0" italic="0" justification="33"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]

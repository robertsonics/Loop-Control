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

#include "MidiTab.h"

//[/Headers]

#include "LoopTab.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
LoopTab::LoopTab ()
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]

    addAndMakeVisible (loopBox = new ComboBox ("loop box"));
    loopBox->setEditableText (false);
    loopBox->setJustificationType (Justification::centredLeft);
    loopBox->setTextWhenNothingSelected (String());
    loopBox->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    loopBox->addListener (this);

    addAndMakeVisible (slider1 = new Slider ("volume slider"));
    slider1->setRange (0, 16383, 1);
    slider1->setSliderStyle (Slider::LinearVertical);
    slider1->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider1->setColour (Slider::backgroundColourId, Colours::black);
    slider1->setColour (Slider::trackColourId, Colour (0xff2164eb));
    slider1->addListener (this);

    addAndMakeVisible (slider2 = new Slider ("new slider"));
    slider2->setRange (0, 16383, 1);
    slider2->setSliderStyle (Slider::LinearVertical);
    slider2->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider2->setColour (Slider::backgroundColourId, Colours::black);
    slider2->setColour (Slider::trackColourId, Colour (0xff2164eb));
    slider2->addListener (this);

    addAndMakeVisible (slider4 = new Slider ("new slider"));
    slider4->setRange (0, 16383, 1);
    slider4->setSliderStyle (Slider::LinearVertical);
    slider4->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider4->setColour (Slider::backgroundColourId, Colours::black);
    slider4->setColour (Slider::trackColourId, Colour (0xff2164eb));
    slider4->addListener (this);

    addAndMakeVisible (slider5 = new Slider ("new slider"));
    slider5->setRange (0, 16383, 1);
    slider5->setSliderStyle (Slider::TwoValueVertical);
    slider5->setTextBoxStyle (Slider::NoTextBox, false, 80, 20);
    slider5->setColour (Slider::backgroundColourId, Colours::black);
    slider5->setColour (Slider::trackColourId, Colour (0xff2164eb));
    slider5->addListener (this);

    addAndMakeVisible (label = new Label ("new label",
                                          TRANS("Loop")));
    label->setFont (Font (18.00f, Font::plain).withTypefaceStyle ("Regular"));
    label->setJustificationType (Justification::centredLeft);
    label->setEditable (false, false, false);
    label->setColour (TextEditor::textColourId, Colours::black);
    label->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label2 = new Label ("new label",
                                           TRANS("Vol\n")));
    label2->setFont (Font (18.00f, Font::plain).withTypefaceStyle ("Regular"));
    label2->setJustificationType (Justification::centredLeft);
    label2->setEditable (false, false, false);
    label2->setColour (TextEditor::textColourId, Colours::black);
    label2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label3 = new Label ("new label",
                                           TRANS("Rate")));
    label3->setFont (Font (18.00f, Font::plain).withTypefaceStyle ("Regular"));
    label3->setJustificationType (Justification::centredLeft);
    label3->setEditable (false, false, false);
    label3->setColour (TextEditor::textColourId, Colours::black);
    label3->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label4 = new Label ("new label",
                                           TRANS("Bal")));
    label4->setFont (Font (18.00f, Font::plain).withTypefaceStyle ("Regular"));
    label4->setJustificationType (Justification::centredLeft);
    label4->setEditable (false, false, false);
    label4->setColour (TextEditor::textColourId, Colours::black);
    label4->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (label6 = new Label ("new label",
                                           TRANS("Limits")));
    label6->setFont (Font (18.00f, Font::plain).withTypefaceStyle ("Regular"));
    label6->setJustificationType (Justification::centredLeft);
    label6->setEditable (false, false, false);
    label6->setColour (TextEditor::textColourId, Colours::black);
    label6->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (resetPitchButton = new TextButton ("reset Pitch button"));
    resetPitchButton->setButtonText (TRANS("Reset"));
    resetPitchButton->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    resetPitchButton->addListener (this);

    addAndMakeVisible (resetSpeedButton = new TextButton ("reset speed button"));
    resetSpeedButton->setButtonText (TRANS("Reset"));
    resetSpeedButton->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    resetSpeedButton->addListener (this);

    addAndMakeVisible (divideButton = new TextButton ("divide button"));
    divideButton->setButtonText (TRANS("Div"));
    divideButton->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    divideButton->addListener (this);

    addAndMakeVisible (startButton = new TextButton ("start button"));
    startButton->setButtonText (TRANS("Start"));
    startButton->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    startButton->addListener (this);

    addAndMakeVisible (syncToggle = new ToggleButton ("sync toggle button"));
    syncToggle->setButtonText (TRANS("Sync to L1"));
    syncToggle->addListener (this);

    addAndMakeVisible (lockToggle = new ToggleButton ("lock toggle button"));
    lockToggle->setButtonText (TRANS("Lock"));
    lockToggle->addListener (this);

    addAndMakeVisible (StopAllButton = new TextButton ("stop all button"));
    StopAllButton->setButtonText (TRANS("StopAll"));
    StopAllButton->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    StopAllButton->addListener (this);

    addAndMakeVisible (stopButton = new TextButton ("stop button"));
    stopButton->setButtonText (TRANS("Stop"));
    stopButton->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    stopButton->addListener (this);


    //[UserPreSize]
    //[/UserPreSize]

    setSize (600, 400);


    //[Constructor] You can add your own custom stuff here..

	m_midi = nullptr;

	loopBox->addItem("1", 1);
	loopBox->addItem("2", 2);
	loopBox->addItem("3", 3);
	loopBox->addItem("4", 4);
	loopBox->addItem("5", 5);
	loopBox->addItem("6", 6);
	loopBox->addItem("7", 7);
	loopBox->addItem("8", 8);
	loopBox->setSelectedId(1, dontSendNotification);

	for (int i = 0; i < NUM_LOOPS; i++) {
		m_loop[i].vol = DEFAULT_VOLUME;
		m_loop[i].bal = DEFAULT_BALANCE;
		m_loop[i].pitch = DEFAULT_PITCH;
		m_loop[i].speed = DEFAULT_SPEED;
		m_loop[i].start = DEFAULT_START;
		m_loop[i].len = DEFAULT_LENGTH;
		m_loop[i].sync = false;
		m_loop[i].lock = false;
		m_loop[i].divide = 8;
		m_loopLast[i].vol = DEFAULT_VOLUME;
		m_loopLast[i].pitch = DEFAULT_PITCH;
		m_loopLast[i].speed = DEFAULT_SPEED;
		m_loopLast[i].start = DEFAULT_START;
		m_loopLast[i].len = DEFAULT_LENGTH;
		m_loopLast[i].sync = false;
		m_loopLast[i].lock = false;
		m_loopLast[i].divide = 8;
	}

	showLoop(0);
	startTimer(15);

    //[/Constructor]
}

LoopTab::~LoopTab()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    loopBox = nullptr;
    slider1 = nullptr;
    slider2 = nullptr;
    slider4 = nullptr;
    slider5 = nullptr;
    label = nullptr;
    label2 = nullptr;
    label3 = nullptr;
    label4 = nullptr;
    label6 = nullptr;
    resetPitchButton = nullptr;
    resetSpeedButton = nullptr;
    divideButton = nullptr;
    startButton = nullptr;
    syncToggle = nullptr;
    lockToggle = nullptr;
    StopAllButton = nullptr;
    stopButton = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void LoopTab::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colours::black);

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void LoopTab::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    loopBox->setBounds (75, 21, 72, 40);
    slider1->setBounds (36, 82, 47, 341);
    slider2->setBounds (210, 82, 47, 341);
    slider4->setBounds (124, 82, 47, 341);
    slider5->setBounds (295, 82, 47, 341);
    label->setBounds (21, 27, 46, 24);
    label2->setBounds (42, 426, 40, 24);
    label3->setBounds (213, 426, 48, 24);
    label4->setBounds (131, 426, 40, 24);
    label6->setBounds (292, 426, 60, 24);
    resetPitchButton->setBounds (204, 463, 60, 40);
    resetSpeedButton->setBounds (118, 463, 60, 40);
    divideButton->setBounds (290, 463, 60, 40);
    startButton->setBounds (29, 463, 60, 40);
    syncToggle->setBounds (169, 24, 104, 32);
    lockToggle->setBounds (306, 514, 88, 32);
    StopAllButton->setBounds (288, 21, 60, 40);
    stopButton->setBounds (29, 515, 60, 40);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void LoopTab::comboBoxChanged (ComboBox* comboBoxThatHasChanged)
{
    //[UsercomboBoxChanged_Pre]
    //[/UsercomboBoxChanged_Pre]

    if (comboBoxThatHasChanged == loopBox)
    {
        //[UserComboBoxCode_loopBox] -- add your combo box handling code here..

		showLoop(loopBox->getSelectedId() - 1);

        //[/UserComboBoxCode_loopBox]
    }

    //[UsercomboBoxChanged_Post]
    //[/UsercomboBoxChanged_Post]
}

void LoopTab::sliderValueChanged (Slider* sliderThatWasMoved)
{
    //[UsersliderValueChanged_Pre]

	int l = loopBox->getSelectedId() - 1;

    //[/UsersliderValueChanged_Pre]

    if (sliderThatWasMoved == slider1)
    {
        //[UserSliderCode_slider1] -- add your slider handling code here..

		m_loop[l].vol = (int)slider1->getValue();

        //[/UserSliderCode_slider1]
    }
    else if (sliderThatWasMoved == slider2)
    {
        //[UserSliderCode_slider2] -- add your slider handling code here..

		m_loop[l].pitch = (int)slider2->getValue();

        //[/UserSliderCode_slider2]
    }
    else if (sliderThatWasMoved == slider4)
    {
        //[UserSliderCode_slider4] -- add your slider handling code here..

		m_loop[l].bal = (int)slider4->getValue();

        //[/UserSliderCode_slider4]
    }
    else if (sliderThatWasMoved == slider5)
    {
        //[UserSliderCode_slider5] -- add your slider handling code here..

		int minVal = (int)slider5->getMinValue();
		int maxVal = (int)slider5->getMaxValue();

		if (m_loop[l].lock) {
			if ((minVal + m_loop[l].len) > 16383) {
				minVal = 16383 - m_loop[l].len;
				slider5->setMinValue((double)minVal, dontSendNotification);
			}
			else {
				maxVal = minVal + m_loop[l].len;
				slider5->setMaxValue((double)maxVal, dontSendNotification);
			}
		}

		m_loop[l].start = minVal;
		m_loop[l].len = maxVal - minVal;

        //[/UserSliderCode_slider5]
    }

    //[UsersliderValueChanged_Post]
    //[/UsersliderValueChanged_Post]
}

void LoopTab::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]

	int l = loopBox->getSelectedId() - 1;

    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == resetPitchButton)
    {
        //[UserButtonCode_resetPitchButton] -- add your button handler code here..

		m_loop[l].pitch = DEFAULT_PITCH;
		slider2->setValue(m_loop[l].pitch, dontSendNotification);
		if (m_midi != nullptr)
			m_midi->sendLoopPitch(l, m_loop[l].pitch);

        //[/UserButtonCode_resetPitchButton]
    }
    else if (buttonThatWasClicked == resetSpeedButton)
    {
        //[UserButtonCode_resetSpeedButton] -- add your button handler code here..

		m_loop[l].pitch = DEFAULT_SPEED;
		slider4->setValue(m_loop[l].pitch, dontSendNotification);
		if (m_midi != nullptr)
			m_midi->sendLoopPitch(l, m_loop[l].pitch);

        //[/UserButtonCode_resetSpeedButton]
    }
    else if (buttonThatWasClicked == divideButton)
    {
        //[UserButtonCode_divideButton] -- add your button handler code here..

		if (++m_loop[l].divide >= 9)
			m_loop[l].divide = 1;
		if (m_midi != nullptr)
			m_midi->sendLoopDivide(l, +m_loop[l].divide);

		switch (m_loop[l].divide) {

		    case 8:
		        m_loop[l].start = DEFAULT_START;
		        m_loop[l].len = 16383;
		    break;

		    case 7:
		        m_loop[l].start = DEFAULT_START;
		        m_loop[l].len = (16383 * 7) >> 3;
		    break;

		    case 6:
		        m_loop[l].start = DEFAULT_START;
		        m_loop[l].len = (16383 * 3) >> 2;
		    break;

		    case 5:
		        m_loop[l].start = DEFAULT_START;
		        m_loop[l].len = (16383 * 5) >> 3;
		    break;

		    case 4:
		        m_loop[l].start = DEFAULT_START;
                m_loop[l].len = 16383 >> 1;
		    break;

		    case 3:
		        m_loop[l].start = DEFAULT_START;
		        m_loop[l].len = (16383 * 3) >> 3;
		    break;

		    case 2:
		        m_loop[l].start = DEFAULT_START;
		        m_loop[l].len = 16383 >> 2;
		    break;

		    case 1:
		        m_loop[l].start = DEFAULT_START;
		        m_loop[l].len = 16383 >> 3;
		    break;

		}

		slider5->setMinValue(m_loop[l].start, dontSendNotification);
		slider5->setMaxValue(m_loop[l].start + m_loop[l].len, dontSendNotification);
		lockToggle->setToggleState(true, dontSendNotification);
		m_loop[l].lock = true;

        //[/UserButtonCode_divideButton]
    }
    else if (buttonThatWasClicked == startButton)
    {
        //[UserButtonCode_startButton] -- add your button handler code here..

		if (m_midi != nullptr)
			m_midi->playLoop(l);

        //[/UserButtonCode_startButton]
    }
    else if (buttonThatWasClicked == syncToggle)
    {
        //[UserButtonCode_syncToggle] -- add your button handler code here..

		if (syncToggle->getToggleState()) {
			m_loop[l].sync = true;
			if (m_midi != nullptr)
				m_midi->sendLoopSyncFlag(l, 1);
		}
		else {
			m_loop[l].sync = false;
			if (m_midi != nullptr)
				m_midi->sendLoopSyncFlag(l, 0);
		}

        //[/UserButtonCode_syncToggle]
    }
    else if (buttonThatWasClicked == lockToggle)
    {
        //[UserButtonCode_lockToggle] -- add your button handler code here..

		if (lockToggle->getToggleState()) {
			m_loop[l].lock = true;
		}
		else {
			m_loop[l].lock = false;
		}

        //[/UserButtonCode_lockToggle]
    }
    else if (buttonThatWasClicked == StopAllButton)
    {
        //[UserButtonCode_StopAllButton] -- add your button handler code here..

		if (m_midi != nullptr) {
			for (int i = 0; i < 8; i++)
				m_midi->stopLoop(i);
		}

        //[/UserButtonCode_StopAllButton]
    }
    else if (buttonThatWasClicked == stopButton)
    {
        //[UserButtonCode_stopButton] -- add your button handler code here..

		if (m_midi != nullptr)
			m_midi->stopLoop(l);

        //[/UserButtonCode_stopButton]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...

//==============================================================================
void LoopTab::timerCallback()
{
	int l = loopBox->getSelectedId() - 1;

	if (m_loop[l].vol != m_loopLast[l].vol) {
		if (m_midi != nullptr)
			m_midi->sendLoopVol(l, m_loop[l].vol);
		m_loopLast[l].vol = m_loop[l].vol;
	}

	if (m_loop[l].bal != m_loopLast[l].bal) {
		if (m_midi != nullptr)
			m_midi->sendLoopBalance(l, m_loop[l].bal);
		m_loopLast[l].bal = m_loop[l].bal;
	}

	if (m_loop[l].pitch != m_loopLast[l].pitch) {
		if (m_midi != nullptr)
			m_midi->sendLoopPitch(l, m_loop[l].pitch);
		m_loopLast[l].pitch = m_loop[l].pitch;
	}

	//if (m_loop[l].speed != m_loopLast[l].speed) {
	//	if (m_midi != nullptr)
	//		m_midi->sendLoopSpeed(l, m_loop[l].speed);
	//	m_loopLast[l].speed = m_loop[l].speed;
	//}

	if (m_loop[l].start != m_loopLast[l].start) {
		if (m_midi != nullptr)
			m_midi->sendLoopStart(l, m_loop[l].start);
		m_loopLast[l].start = m_loop[l].start;
	}

	if (m_loop[l].len != m_loopLast[l].len) {
		if (m_midi != nullptr)
			m_midi->sendLoopLen(l, m_loop[l].len);
		m_loopLast[l].len = m_loop[l].len;
	}
}

// **************************************************************************
// setMidiComponent
// **************************************************************************
void LoopTab::setMidiComponent(MidiTab * m) {

	m_midi = (MidiTab *)m;

	//if (m_midi != nullptr)
	//	m_Output->setAudioSettings(this);
}

// **************************************************************************
// resetLoop
// **************************************************************************
void LoopTab::resetLoop(int l) {

	m_loop[l].vol = DEFAULT_VOLUME;
	m_loop[l].bal = DEFAULT_BALANCE;
	m_loop[l].pitch = DEFAULT_PITCH;
	m_loop[l].speed = DEFAULT_SPEED;
	m_loop[l].start = DEFAULT_START;
	m_loop[l].len = DEFAULT_LENGTH;
	m_loop[l].sync = false;
	m_loop[l].lock = false;
	m_loop[l].divide = 8;
	if ((loopBox->getSelectedId() - 1) == l)
		showLoop(l);
}

// **************************************************************************
// showLoop
// **************************************************************************
void LoopTab::showLoop(int l) {

	slider1->setValue(m_loop[l].vol, dontSendNotification);
	slider2->setValue(m_loop[l].pitch, dontSendNotification);
	slider4->setValue(m_loop[l].bal, dontSendNotification);
	slider5->setMinValue(m_loop[l].start, dontSendNotification);
	slider5->setMaxValue(m_loop[l].start + m_loop[l].len, dontSendNotification);
	syncToggle->setToggleState(m_loop[l].sync, dontSendNotification);
	lockToggle->setToggleState(m_loop[l].lock, dontSendNotification);
	if (l > 0)
		syncToggle->setEnabled(true);
	else
		syncToggle->setEnabled(false);
}

//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="LoopTab" componentName=""
                 parentClasses="public Component, private Timer" constructorParams=""
                 variableInitialisers="" snapPixels="8" snapActive="1" snapShown="1"
                 overlayOpacity="0.330" fixedSize="0" initialWidth="600" initialHeight="400">
  <BACKGROUND backgroundColour="ff000000"/>
  <COMBOBOX name="loop box" id="b83c080f641b55ff" memberName="loopBox" virtualName=""
            explicitFocusOrder="0" pos="75 21 72 40" editable="0" layout="33"
            items="" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <SLIDER name="volume slider" id="e6ce7faf6def28fa" memberName="slider1"
          virtualName="" explicitFocusOrder="0" pos="36 82 47 341" bkgcol="ff000000"
          trackcol="ff2164eb" min="0" max="16383" int="1" style="LinearVertical"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1" needsCallback="1"/>
  <SLIDER name="new slider" id="8208ee4855d37378" memberName="slider2"
          virtualName="" explicitFocusOrder="0" pos="210 82 47 341" bkgcol="ff000000"
          trackcol="ff2164eb" min="0" max="16383" int="1" style="LinearVertical"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1" needsCallback="1"/>
  <SLIDER name="new slider" id="7115b56618e33938" memberName="slider4"
          virtualName="" explicitFocusOrder="0" pos="124 82 47 341" bkgcol="ff000000"
          trackcol="ff2164eb" min="0" max="16383" int="1" style="LinearVertical"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1" needsCallback="1"/>
  <SLIDER name="new slider" id="250188c57eda48bc" memberName="slider5"
          virtualName="" explicitFocusOrder="0" pos="295 82 47 341" bkgcol="ff000000"
          trackcol="ff2164eb" min="0" max="16383" int="1" style="TwoValueVertical"
          textBoxPos="NoTextBox" textBoxEditable="1" textBoxWidth="80"
          textBoxHeight="20" skewFactor="1" needsCallback="1"/>
  <LABEL name="new label" id="4650b58959ead6d0" memberName="label" virtualName=""
         explicitFocusOrder="0" pos="21 27 46 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Loop" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="18"
         kerning="0" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="84a3513fa940117e" memberName="label2" virtualName=""
         explicitFocusOrder="0" pos="42 426 40 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Vol&#10;" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="18"
         kerning="0" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="60e683c944bcbd46" memberName="label3" virtualName=""
         explicitFocusOrder="0" pos="213 426 48 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Rate" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="18"
         kerning="0" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="f253c4b3ff09678c" memberName="label4" virtualName=""
         explicitFocusOrder="0" pos="131 426 40 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Bal" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="18"
         kerning="0" bold="0" italic="0" justification="33"/>
  <LABEL name="new label" id="466b3b4fe165c5ef" memberName="label6" virtualName=""
         explicitFocusOrder="0" pos="292 426 60 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Limits" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="18"
         kerning="0" bold="0" italic="0" justification="33"/>
  <TEXTBUTTON name="reset Pitch button" id="103000289bf7729e" memberName="resetPitchButton"
              virtualName="" explicitFocusOrder="0" pos="204 463 60 40" buttonText="Reset"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="reset speed button" id="d781d0bbaac5e3d4" memberName="resetSpeedButton"
              virtualName="" explicitFocusOrder="0" pos="118 463 60 40" buttonText="Reset"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="divide button" id="a2aafda643260c09" memberName="divideButton"
              virtualName="" explicitFocusOrder="0" pos="290 463 60 40" buttonText="Div"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="start button" id="16ec7090a163130b" memberName="startButton"
              virtualName="" explicitFocusOrder="0" pos="29 463 60 40" buttonText="Start"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TOGGLEBUTTON name="sync toggle button" id="224171f4a81395da" memberName="syncToggle"
                virtualName="" explicitFocusOrder="0" pos="169 24 104 32" buttonText="Sync to L1"
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <TOGGLEBUTTON name="lock toggle button" id="fbc82ebbb352c2ba" memberName="lockToggle"
                virtualName="" explicitFocusOrder="0" pos="306 514 88 32" buttonText="Lock"
                connectedEdges="0" needsCallback="1" radioGroupId="0" state="0"/>
  <TEXTBUTTON name="stop all button" id="93edd80f58dfeaf3" memberName="StopAllButton"
              virtualName="" explicitFocusOrder="0" pos="288 21 60 40" buttonText="StopAll"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="stop button" id="518bcb8bb8340f" memberName="stopButton"
              virtualName="" explicitFocusOrder="0" pos="29 515 60 40" buttonText="Stop"
              connectedEdges="15" needsCallback="1" radioGroupId="0"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]

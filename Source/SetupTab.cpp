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
#include "LoopTab.h"

//[/Headers]

#include "SetupTab.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
SetupTab::SetupTab ()
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]

    addAndMakeVisible (label2 = new Label ("new label",
                                           TRANS("Track")));
    label2->setFont (Font (18.00f, Font::plain).withTypefaceStyle ("Regular"));
    label2->setJustificationType (Justification::centredLeft);
    label2->setEditable (false, false, false);
    label2->setColour (TextEditor::textColourId, Colours::black);
    label2->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (loadButton1 = new TextButton ("load button"));
    loadButton1->setExplicitFocusOrder (1);
    loadButton1->setButtonText (TRANS("Load"));
    loadButton1->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    loadButton1->addListener (this);
    loadButton1->setColour (TextButton::buttonOnColourId, Colour (0xff0044eb));

    addAndMakeVisible (trackText1 = new TextEditor ("new text editor"));
    trackText1->setMultiLine (false);
    trackText1->setReturnKeyStartsNewLine (false);
    trackText1->setReadOnly (false);
    trackText1->setScrollbarsShown (true);
    trackText1->setCaretVisible (true);
    trackText1->setPopupMenuEnabled (true);
    trackText1->setColour (TextEditor::textColourId, Colour (0xff007bff));
    trackText1->setColour (TextEditor::backgroundColourId, Colours::black);
    trackText1->setColour (TextEditor::outlineColourId, Colours::white);
    trackText1->setText (TRANS("9"));

    addAndMakeVisible (playButton1 = new TextButton ("play button"));
    playButton1->setButtonText (TRANS("Play"));
    playButton1->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    playButton1->addListener (this);
    playButton1->setColour (TextButton::buttonOnColourId, Colour (0xff0044eb));

    addAndMakeVisible (stopButton1 = new TextButton ("stop button"));
    stopButton1->setButtonText (TRANS("Stop"));
    stopButton1->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    stopButton1->addListener (this);
    stopButton1->setColour (TextButton::buttonOnColourId, Colour (0xff0044eb));

    addAndMakeVisible (outBox1 = new ComboBox ("new combo box"));
    outBox1->setEditableText (false);
    outBox1->setJustificationType (Justification::centredLeft);
    outBox1->setTextWhenNothingSelected (String());
    outBox1->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    outBox1->addListener (this);

    addAndMakeVisible (label3 = new Label ("new label",
                                           TRANS("Output")));
    label3->setFont (Font (18.00f, Font::plain).withTypefaceStyle ("Regular"));
    label3->setJustificationType (Justification::centredLeft);
    label3->setEditable (false, false, false);
    label3->setColour (TextEditor::textColourId, Colours::black);
    label3->setColour (TextEditor::backgroundColourId, Colour (0x00000000));

    addAndMakeVisible (loadButton2 = new TextButton ("load button"));
    loadButton2->setButtonText (TRANS("Load"));
    loadButton2->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    loadButton2->addListener (this);
    loadButton2->setColour (TextButton::buttonOnColourId, Colour (0xff0044eb));

    addAndMakeVisible (trackText2 = new TextEditor ("new text editor"));
    trackText2->setMultiLine (false);
    trackText2->setReturnKeyStartsNewLine (false);
    trackText2->setReadOnly (false);
    trackText2->setScrollbarsShown (true);
    trackText2->setCaretVisible (true);
    trackText2->setPopupMenuEnabled (true);
    trackText2->setColour (TextEditor::textColourId, Colour (0xff007bff));
    trackText2->setColour (TextEditor::backgroundColourId, Colours::black);
    trackText2->setColour (TextEditor::outlineColourId, Colours::white);
    trackText2->setText (TRANS("9"));

    addAndMakeVisible (playButton2 = new TextButton ("play button"));
    playButton2->setButtonText (TRANS("Play"));
    playButton2->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    playButton2->addListener (this);
    playButton2->setColour (TextButton::buttonOnColourId, Colour (0xff0044eb));

    addAndMakeVisible (stopButton2 = new TextButton ("stop button"));
    stopButton2->setButtonText (TRANS("Stop"));
    stopButton2->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    stopButton2->addListener (this);
    stopButton2->setColour (TextButton::buttonOnColourId, Colour (0xff0044eb));

    addAndMakeVisible (outBox2 = new ComboBox ("new combo box"));
    outBox2->setEditableText (false);
    outBox2->setJustificationType (Justification::centredLeft);
    outBox2->setTextWhenNothingSelected (String());
    outBox2->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    outBox2->addListener (this);

    addAndMakeVisible (loadButton3 = new TextButton ("load button"));
    loadButton3->setButtonText (TRANS("Load"));
    loadButton3->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    loadButton3->addListener (this);
    loadButton3->setColour (TextButton::buttonOnColourId, Colour (0xff0044eb));

    addAndMakeVisible (trackText3 = new TextEditor ("new text editor"));
    trackText3->setMultiLine (false);
    trackText3->setReturnKeyStartsNewLine (false);
    trackText3->setReadOnly (false);
    trackText3->setScrollbarsShown (true);
    trackText3->setCaretVisible (true);
    trackText3->setPopupMenuEnabled (true);
    trackText3->setColour (TextEditor::textColourId, Colour (0xff007bff));
    trackText3->setColour (TextEditor::backgroundColourId, Colours::black);
    trackText3->setColour (TextEditor::outlineColourId, Colours::white);
    trackText3->setText (TRANS("9"));

    addAndMakeVisible (playButton3 = new TextButton ("play button"));
    playButton3->setButtonText (TRANS("Play"));
    playButton3->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    playButton3->addListener (this);
    playButton3->setColour (TextButton::buttonOnColourId, Colour (0xff0044eb));

    addAndMakeVisible (stopButton3 = new TextButton ("stop button"));
    stopButton3->setButtonText (TRANS("Stop"));
    stopButton3->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    stopButton3->addListener (this);
    stopButton3->setColour (TextButton::buttonOnColourId, Colour (0xff0044eb));

    addAndMakeVisible (outBox3 = new ComboBox ("new combo box"));
    outBox3->setEditableText (false);
    outBox3->setJustificationType (Justification::centredLeft);
    outBox3->setTextWhenNothingSelected (String());
    outBox3->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    outBox3->addListener (this);

    addAndMakeVisible (loadButton4 = new TextButton ("load button"));
    loadButton4->setButtonText (TRANS("Load"));
    loadButton4->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    loadButton4->addListener (this);
    loadButton4->setColour (TextButton::buttonOnColourId, Colour (0xff0044eb));

    addAndMakeVisible (trackText4 = new TextEditor ("new text editor"));
    trackText4->setMultiLine (false);
    trackText4->setReturnKeyStartsNewLine (false);
    trackText4->setReadOnly (false);
    trackText4->setScrollbarsShown (true);
    trackText4->setCaretVisible (true);
    trackText4->setPopupMenuEnabled (true);
    trackText4->setColour (TextEditor::textColourId, Colour (0xff007bff));
    trackText4->setColour (TextEditor::backgroundColourId, Colours::black);
    trackText4->setColour (TextEditor::outlineColourId, Colours::white);
    trackText4->setText (TRANS("9"));

    addAndMakeVisible (playButton4 = new TextButton ("play button"));
    playButton4->setButtonText (TRANS("Play"));
    playButton4->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    playButton4->addListener (this);
    playButton4->setColour (TextButton::buttonOnColourId, Colour (0xff0044eb));

    addAndMakeVisible (stopButton4 = new TextButton ("stop button"));
    stopButton4->setButtonText (TRANS("Stop"));
    stopButton4->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    stopButton4->addListener (this);
    stopButton4->setColour (TextButton::buttonOnColourId, Colour (0xff0044eb));

    addAndMakeVisible (outBox4 = new ComboBox ("new combo box"));
    outBox4->setEditableText (false);
    outBox4->setJustificationType (Justification::centredLeft);
    outBox4->setTextWhenNothingSelected (String());
    outBox4->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    outBox4->addListener (this);

    addAndMakeVisible (loadButton5 = new TextButton ("load button"));
    loadButton5->setButtonText (TRANS("Load"));
    loadButton5->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    loadButton5->addListener (this);
    loadButton5->setColour (TextButton::buttonOnColourId, Colour (0xff0044eb));

    addAndMakeVisible (trackText5 = new TextEditor ("new text editor"));
    trackText5->setMultiLine (false);
    trackText5->setReturnKeyStartsNewLine (false);
    trackText5->setReadOnly (false);
    trackText5->setScrollbarsShown (true);
    trackText5->setCaretVisible (true);
    trackText5->setPopupMenuEnabled (true);
    trackText5->setColour (TextEditor::textColourId, Colour (0xff007bff));
    trackText5->setColour (TextEditor::backgroundColourId, Colours::black);
    trackText5->setColour (TextEditor::outlineColourId, Colours::white);
    trackText5->setText (TRANS("9"));

    addAndMakeVisible (playButton5 = new TextButton ("play button"));
    playButton5->setButtonText (TRANS("Play"));
    playButton5->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    playButton5->addListener (this);
    playButton5->setColour (TextButton::buttonOnColourId, Colour (0xff0044eb));

    addAndMakeVisible (stopButton5 = new TextButton ("stop button"));
    stopButton5->setButtonText (TRANS("Stop"));
    stopButton5->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    stopButton5->addListener (this);
    stopButton5->setColour (TextButton::buttonOnColourId, Colour (0xff0044eb));

    addAndMakeVisible (outBox5 = new ComboBox ("new combo box"));
    outBox5->setEditableText (false);
    outBox5->setJustificationType (Justification::centredLeft);
    outBox5->setTextWhenNothingSelected (String());
    outBox5->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    outBox5->addListener (this);

    addAndMakeVisible (loadButton6 = new TextButton ("load button"));
    loadButton6->setButtonText (TRANS("Load"));
    loadButton6->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    loadButton6->addListener (this);
    loadButton6->setColour (TextButton::buttonOnColourId, Colour (0xff0044eb));

    addAndMakeVisible (trackText6 = new TextEditor ("new text editor"));
    trackText6->setMultiLine (false);
    trackText6->setReturnKeyStartsNewLine (false);
    trackText6->setReadOnly (false);
    trackText6->setScrollbarsShown (true);
    trackText6->setCaretVisible (true);
    trackText6->setPopupMenuEnabled (true);
    trackText6->setColour (TextEditor::textColourId, Colour (0xff007bff));
    trackText6->setColour (TextEditor::backgroundColourId, Colours::black);
    trackText6->setColour (TextEditor::outlineColourId, Colours::white);
    trackText6->setText (TRANS("9"));

    addAndMakeVisible (playButton6 = new TextButton ("play button"));
    playButton6->setButtonText (TRANS("Play"));
    playButton6->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    playButton6->addListener (this);
    playButton6->setColour (TextButton::buttonOnColourId, Colour (0xff0044eb));

    addAndMakeVisible (stopButton6 = new TextButton ("stop button"));
    stopButton6->setButtonText (TRANS("Stop"));
    stopButton6->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    stopButton6->addListener (this);
    stopButton6->setColour (TextButton::buttonOnColourId, Colour (0xff0044eb));

    addAndMakeVisible (outBox6 = new ComboBox ("new combo box"));
    outBox6->setEditableText (false);
    outBox6->setJustificationType (Justification::centredLeft);
    outBox6->setTextWhenNothingSelected (String());
    outBox6->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    outBox6->addListener (this);

    addAndMakeVisible (loadButton7 = new TextButton ("load button"));
    loadButton7->setButtonText (TRANS("Load"));
    loadButton7->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    loadButton7->addListener (this);
    loadButton7->setColour (TextButton::buttonOnColourId, Colour (0xff0044eb));

    addAndMakeVisible (trackText7 = new TextEditor ("new text editor"));
    trackText7->setMultiLine (false);
    trackText7->setReturnKeyStartsNewLine (false);
    trackText7->setReadOnly (false);
    trackText7->setScrollbarsShown (true);
    trackText7->setCaretVisible (true);
    trackText7->setPopupMenuEnabled (true);
    trackText7->setColour (TextEditor::textColourId, Colour (0xff007bff));
    trackText7->setColour (TextEditor::backgroundColourId, Colours::black);
    trackText7->setColour (TextEditor::outlineColourId, Colours::white);
    trackText7->setText (TRANS("9"));

    addAndMakeVisible (playButton7 = new TextButton ("play button"));
    playButton7->setButtonText (TRANS("Play"));
    playButton7->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    playButton7->addListener (this);
    playButton7->setColour (TextButton::buttonOnColourId, Colour (0xff0044eb));

    addAndMakeVisible (stopButton7 = new TextButton ("stop button"));
    stopButton7->setButtonText (TRANS("Stop"));
    stopButton7->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    stopButton7->addListener (this);
    stopButton7->setColour (TextButton::buttonOnColourId, Colour (0xff0044eb));

    addAndMakeVisible (outBox7 = new ComboBox ("new combo box"));
    outBox7->setEditableText (false);
    outBox7->setJustificationType (Justification::centredLeft);
    outBox7->setTextWhenNothingSelected (String());
    outBox7->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    outBox7->addListener (this);

    addAndMakeVisible (loadButton8 = new TextButton ("load button"));
    loadButton8->setButtonText (TRANS("Load"));
    loadButton8->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    loadButton8->addListener (this);
    loadButton8->setColour (TextButton::buttonOnColourId, Colour (0xff0044eb));

    addAndMakeVisible (trackText8 = new TextEditor ("new text editor"));
    trackText8->setMultiLine (false);
    trackText8->setReturnKeyStartsNewLine (false);
    trackText8->setReadOnly (false);
    trackText8->setScrollbarsShown (true);
    trackText8->setCaretVisible (true);
    trackText8->setPopupMenuEnabled (true);
    trackText8->setColour (TextEditor::textColourId, Colour (0xff007bff));
    trackText8->setColour (TextEditor::backgroundColourId, Colours::black);
    trackText8->setColour (TextEditor::outlineColourId, Colours::white);
    trackText8->setText (TRANS("9"));

    addAndMakeVisible (playButton8 = new TextButton ("play button"));
    playButton8->setButtonText (TRANS("Play"));
    playButton8->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    playButton8->addListener (this);
    playButton8->setColour (TextButton::buttonOnColourId, Colour (0xff0044eb));

    addAndMakeVisible (stopButton8 = new TextButton ("stop button"));
    stopButton8->setButtonText (TRANS("Stop"));
    stopButton8->setConnectedEdges (Button::ConnectedOnLeft | Button::ConnectedOnRight | Button::ConnectedOnTop | Button::ConnectedOnBottom);
    stopButton8->addListener (this);
    stopButton8->setColour (TextButton::buttonOnColourId, Colour (0xff0044eb));

    addAndMakeVisible (outBox8 = new ComboBox ("new combo box"));
    outBox8->setEditableText (false);
    outBox8->setJustificationType (Justification::centredLeft);
    outBox8->setTextWhenNothingSelected (String());
    outBox8->setTextWhenNoChoicesAvailable (TRANS("(no choices)"));
    outBox8->addListener (this);


    //[UserPreSize]
    //[/UserPreSize]

    setSize (600, 400);


    //[Constructor] You can add your own custom stuff here..

	m_midi = nullptr;
	m_loopTab = nullptr;

	trackText1->setInputRestrictions(4, "0123456789");
	trackText1->setFont(Font(20, Font::plain));
	trackText1->setText(String(1), dontSendNotification);

	trackText2->setInputRestrictions(4, "0123456789");
	trackText2->setFont(Font(20, Font::plain));
	trackText2->setText(String(2), dontSendNotification);

	trackText3->setInputRestrictions(4, "0123456789");
	trackText3->setFont(Font(20, Font::plain));
	trackText3->setText(String(3), dontSendNotification);

	trackText4->setInputRestrictions(4, "0123456789");
	trackText4->setFont(Font(20, Font::plain));
	trackText4->setText(String(4), dontSendNotification);

	trackText5->setInputRestrictions(4, "0123456789");
	trackText5->setFont(Font(20, Font::plain));
	trackText5->setText(String(5), dontSendNotification);

	trackText6->setInputRestrictions(4, "0123456789");
	trackText6->setFont(Font(20, Font::plain));
	trackText6->setText(String(6), dontSendNotification);

	trackText7->setInputRestrictions(4, "0123456789");
	trackText7->setFont(Font(20, Font::plain));
	trackText7->setText(String(7), dontSendNotification);

	trackText8->setInputRestrictions(4, "0123456789");
	trackText8->setFont(Font(20, Font::plain));
	trackText8->setText(String(8), dontSendNotification);

	outBox1->addItem("1/2", 1);
	outBox1->addItem("3/4", 2);
	outBox1->addItem("5/6", 3);
	outBox1->addItem("7/8", 4);
	outBox1->setSelectedId(1, dontSendNotification);

	outBox2->addItem("1/2", 1);
	outBox2->addItem("3/4", 2);
	outBox2->addItem("5/6", 3);
	outBox2->addItem("7/8", 4);
	outBox2->setSelectedId(1, dontSendNotification);

	outBox3->addItem("1/2", 1);
	outBox3->addItem("3/4", 2);
	outBox3->addItem("5/6", 3);
	outBox3->addItem("7/8", 4);
	outBox3->setSelectedId(1, dontSendNotification);

	outBox4->addItem("1/2", 1);
	outBox4->addItem("3/4", 2);
	outBox4->addItem("5/6", 3);
	outBox4->addItem("7/8", 4);
	outBox4->setSelectedId(1, dontSendNotification);

	outBox5->addItem("1/2", 1);
	outBox5->addItem("3/4", 2);
	outBox5->addItem("5/6", 3);
	outBox5->addItem("7/8", 4);
	outBox5->setSelectedId(1, dontSendNotification);

	outBox6->addItem("1/2", 1);
	outBox6->addItem("3/4", 2);
	outBox6->addItem("5/6", 3);
	outBox6->addItem("7/8", 4);
	outBox6->setSelectedId(1, dontSendNotification);

	outBox7->addItem("1/2", 1);
	outBox7->addItem("3/4", 2);
	outBox7->addItem("5/6", 3);
	outBox7->addItem("7/8", 4);
	outBox7->setSelectedId(1, dontSendNotification);

	outBox8->addItem("1/2", 1);
	outBox8->addItem("3/4", 2);
	outBox8->addItem("5/6", 3);
	outBox8->addItem("7/8", 4);
	outBox8->setSelectedId(1, dontSendNotification);

	playButton1->setEnabled(false);
	playButton2->setEnabled(false);
	playButton3->setEnabled(false);
	playButton4->setEnabled(false);
	playButton5->setEnabled(false);
	playButton6->setEnabled(false);
	playButton7->setEnabled(false);
	playButton8->setEnabled(false);

	stopButton1->setEnabled(false);
	stopButton2->setEnabled(false);
	stopButton3->setEnabled(false);
	stopButton4->setEnabled(false);
	stopButton5->setEnabled(false);
	stopButton6->setEnabled(false);
	stopButton7->setEnabled(false);
	stopButton8->setEnabled(false);

	//startTimer(15);

    //[/Constructor]
}

SetupTab::~SetupTab()
{
    //[Destructor_pre]. You can add your own custom destruction code here..
    //[/Destructor_pre]

    label2 = nullptr;
    loadButton1 = nullptr;
    trackText1 = nullptr;
    playButton1 = nullptr;
    stopButton1 = nullptr;
    outBox1 = nullptr;
    label3 = nullptr;
    loadButton2 = nullptr;
    trackText2 = nullptr;
    playButton2 = nullptr;
    stopButton2 = nullptr;
    outBox2 = nullptr;
    loadButton3 = nullptr;
    trackText3 = nullptr;
    playButton3 = nullptr;
    stopButton3 = nullptr;
    outBox3 = nullptr;
    loadButton4 = nullptr;
    trackText4 = nullptr;
    playButton4 = nullptr;
    stopButton4 = nullptr;
    outBox4 = nullptr;
    loadButton5 = nullptr;
    trackText5 = nullptr;
    playButton5 = nullptr;
    stopButton5 = nullptr;
    outBox5 = nullptr;
    loadButton6 = nullptr;
    trackText6 = nullptr;
    playButton6 = nullptr;
    stopButton6 = nullptr;
    outBox6 = nullptr;
    loadButton7 = nullptr;
    trackText7 = nullptr;
    playButton7 = nullptr;
    stopButton7 = nullptr;
    outBox7 = nullptr;
    loadButton8 = nullptr;
    trackText8 = nullptr;
    playButton8 = nullptr;
    stopButton8 = nullptr;
    outBox8 = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void SetupTab::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colours::black);

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void SetupTab::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    label2->setBounds (25, 43, 55, 24);
    loadButton1->setBounds (98, 71, 54, 40);
    trackText1->setBounds (20, 73, 62, 36);
    playButton1->setBounds (247, 71, 54, 40);
    stopButton1->setBounds (314, 71, 54, 40);
    outBox1->setBounds (165, 73, 68, 36);
    label3->setBounds (169, 43, 63, 24);
    loadButton2->setBounds (98, 127, 54, 40);
    trackText2->setBounds (20, 129, 62, 36);
    playButton2->setBounds (247, 127, 54, 40);
    stopButton2->setBounds (314, 127, 54, 40);
    outBox2->setBounds (165, 129, 68, 36);
    loadButton3->setBounds (98, 183, 54, 38);
    trackText3->setBounds (20, 185, 62, 36);
    playButton3->setBounds (247, 183, 54, 40);
    stopButton3->setBounds (314, 183, 54, 40);
    outBox3->setBounds (165, 185, 68, 36);
    loadButton4->setBounds (98, 240, 54, 40);
    trackText4->setBounds (20, 242, 62, 36);
    playButton4->setBounds (247, 240, 54, 40);
    stopButton4->setBounds (314, 240, 54, 40);
    outBox4->setBounds (165, 242, 68, 36);
    loadButton5->setBounds (98, 296, 54, 40);
    trackText5->setBounds (20, 298, 62, 36);
    playButton5->setBounds (247, 296, 54, 40);
    stopButton5->setBounds (314, 296, 54, 40);
    outBox5->setBounds (165, 298, 68, 36);
    loadButton6->setBounds (98, 352, 54, 40);
    trackText6->setBounds (20, 354, 62, 36);
    playButton6->setBounds (247, 352, 54, 40);
    stopButton6->setBounds (314, 352, 54, 40);
    outBox6->setBounds (165, 354, 68, 36);
    loadButton7->setBounds (98, 408, 54, 40);
    trackText7->setBounds (20, 410, 62, 36);
    playButton7->setBounds (247, 408, 54, 40);
    stopButton7->setBounds (314, 408, 54, 40);
    outBox7->setBounds (165, 410, 68, 36);
    loadButton8->setBounds (98, 465, 54, 40);
    trackText8->setBounds (20, 467, 62, 36);
    playButton8->setBounds (247, 465, 54, 40);
    stopButton8->setBounds (314, 465, 54, 40);
    outBox8->setBounds (165, 467, 68, 36);
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}

void SetupTab::buttonClicked (Button* buttonThatWasClicked)
{
    //[UserbuttonClicked_Pre]

	String s;
	int t;

    //[/UserbuttonClicked_Pre]

    if (buttonThatWasClicked == loadButton1)
    {
        //[UserButtonCode_loadButton1] -- add your button handler code here..

		s = trackText1->getText();
		t = s.getIntValue();
		if ((t > 0) && (t <= 4096)) {
			if (m_midi != nullptr)
				m_midi->loadLoop(0, t);
			playButton1->setEnabled(true);
			stopButton1->setEnabled(true);
		}
		outBox1->setSelectedId(1, dontSendNotification);
		m_loopTab->resetLoop(0);

        //[/UserButtonCode_loadButton1]
    }
    else if (buttonThatWasClicked == playButton1)
    {
        //[UserButtonCode_playButton1] -- add your button handler code here..

		if (m_midi != nullptr)
			m_midi->playLoop(0);

        //[/UserButtonCode_playButton1]
    }
    else if (buttonThatWasClicked == stopButton1)
    {
        //[UserButtonCode_stopButton1] -- add your button handler code here..

		if (m_midi != nullptr)
			m_midi->stopLoop(0);

        //[/UserButtonCode_stopButton1]
    }
    else if (buttonThatWasClicked == loadButton2)
    {
        //[UserButtonCode_loadButton2] -- add your button handler code here..

		s = trackText2->getText();
		t = s.getIntValue();
		if ((t > 0) && (t <= 4096)) {
			if (m_midi != nullptr)
				m_midi->loadLoop(1, t);
			playButton2->setEnabled(true);
			stopButton2->setEnabled(true);
		}
		outBox2->setSelectedId(1, dontSendNotification);
		m_loopTab->resetLoop(1);

        //[/UserButtonCode_loadButton2]
    }
    else if (buttonThatWasClicked == playButton2)
    {
        //[UserButtonCode_playButton2] -- add your button handler code here..

		if (m_midi != nullptr)
			m_midi->playLoop(1);

        //[/UserButtonCode_playButton2]
    }
    else if (buttonThatWasClicked == stopButton2)
    {
        //[UserButtonCode_stopButton2] -- add your button handler code here..

		if (m_midi != nullptr)
			m_midi->stopLoop(1);

        //[/UserButtonCode_stopButton2]
    }
    else if (buttonThatWasClicked == loadButton3)
    {
        //[UserButtonCode_loadButton3] -- add your button handler code here..

		s = trackText3->getText();
		t = s.getIntValue();
		if ((t > 0) && (t <= 4096)) {
			if (m_midi != nullptr)
				m_midi->loadLoop(2, t);
			playButton3->setEnabled(true);
			stopButton3->setEnabled(true);
		}
		outBox3->setSelectedId(1, dontSendNotification);
		m_loopTab->resetLoop(2);

        //[/UserButtonCode_loadButton3]
    }
    else if (buttonThatWasClicked == playButton3)
    {
        //[UserButtonCode_playButton3] -- add your button handler code here..

		if (m_midi != nullptr)
			m_midi->playLoop(2);

        //[/UserButtonCode_playButton3]
    }
    else if (buttonThatWasClicked == stopButton3)
    {
        //[UserButtonCode_stopButton3] -- add your button handler code here..

		if (m_midi != nullptr)
			m_midi->stopLoop(2);

        //[/UserButtonCode_stopButton3]
    }
    else if (buttonThatWasClicked == loadButton4)
    {
        //[UserButtonCode_loadButton4] -- add your button handler code here..

		s = trackText4->getText();
		t = s.getIntValue();
		if ((t > 0) && (t <= 4096)) {
			if (m_midi != nullptr)
				m_midi->loadLoop(3, t);
			playButton4->setEnabled(true);
			stopButton4->setEnabled(true);
		}
		outBox4->setSelectedId(1, dontSendNotification);
		m_loopTab->resetLoop(3);

        //[/UserButtonCode_loadButton4]
    }
    else if (buttonThatWasClicked == playButton4)
    {
        //[UserButtonCode_playButton4] -- add your button handler code here..

		if (m_midi != nullptr)
			m_midi->playLoop(3);

        //[/UserButtonCode_playButton4]
    }
    else if (buttonThatWasClicked == stopButton4)
    {
        //[UserButtonCode_stopButton4] -- add your button handler code here..

		if (m_midi != nullptr)
			m_midi->stopLoop(3);

        //[/UserButtonCode_stopButton4]
    }
    else if (buttonThatWasClicked == loadButton5)
    {
        //[UserButtonCode_loadButton5] -- add your button handler code here..

		s = trackText5->getText();
		t = s.getIntValue();
		if ((t > 0) && (t <= 4096)) {
			if (m_midi != nullptr)
				m_midi->loadLoop(4, t);
			playButton5->setEnabled(true);
			stopButton5->setEnabled(true);
		}
		outBox5->setSelectedId(1, dontSendNotification);
		m_loopTab->resetLoop(4);

        //[/UserButtonCode_loadButton5]
    }
    else if (buttonThatWasClicked == playButton5)
    {
        //[UserButtonCode_playButton5] -- add your button handler code here..

		if (m_midi != nullptr)
			m_midi->playLoop(4);

        //[/UserButtonCode_playButton5]
    }
    else if (buttonThatWasClicked == stopButton5)
    {
        //[UserButtonCode_stopButton5] -- add your button handler code here..

		if (m_midi != nullptr)
			m_midi->stopLoop(4);

        //[/UserButtonCode_stopButton5]
    }
    else if (buttonThatWasClicked == loadButton6)
    {
        //[UserButtonCode_loadButton6] -- add your button handler code here..

		s = trackText6->getText();
		t = s.getIntValue();
		if ((t > 0) && (t <= 4096)) {
			if (m_midi != nullptr)
				m_midi->loadLoop(5, t);
			playButton6->setEnabled(true);
			stopButton6->setEnabled(true);
		}
		outBox6->setSelectedId(1, dontSendNotification);
		m_loopTab->resetLoop(5);

        //[/UserButtonCode_loadButton6]
    }
    else if (buttonThatWasClicked == playButton6)
    {
        //[UserButtonCode_playButton6] -- add your button handler code here..

		if (m_midi != nullptr)
			m_midi->playLoop(5);

        //[/UserButtonCode_playButton6]
    }
    else if (buttonThatWasClicked == stopButton6)
    {
        //[UserButtonCode_stopButton6] -- add your button handler code here..

		if (m_midi != nullptr)
			m_midi->stopLoop(5);

        //[/UserButtonCode_stopButton6]
    }
    else if (buttonThatWasClicked == loadButton7)
    {
        //[UserButtonCode_loadButton7] -- add your button handler code here..

		s = trackText7->getText();
		t = s.getIntValue();
		if ((t > 0) && (t <= 4096)) {
			if (m_midi != nullptr)
				m_midi->loadLoop(6, t);
			playButton7->setEnabled(true);
			stopButton7->setEnabled(true);
		}
		outBox7->setSelectedId(1, dontSendNotification);
		m_loopTab->resetLoop(6);

        //[/UserButtonCode_loadButton7]
    }
    else if (buttonThatWasClicked == playButton7)
    {
        //[UserButtonCode_playButton7] -- add your button handler code here..

		if (m_midi != nullptr)
			m_midi->playLoop(6);

        //[/UserButtonCode_playButton7]
    }
    else if (buttonThatWasClicked == stopButton7)
    {
        //[UserButtonCode_stopButton7] -- add your button handler code here..

		if (m_midi != nullptr)
			m_midi->stopLoop(6);

        //[/UserButtonCode_stopButton7]
    }
    else if (buttonThatWasClicked == loadButton8)
    {
        //[UserButtonCode_loadButton8] -- add your button handler code here..

		s = trackText8->getText();
		t = s.getIntValue();
		if ((t > 0) && (t <= 4096)) {
			if (m_midi != nullptr)
				m_midi->loadLoop(7, t);
			playButton8->setEnabled(true);
			stopButton8->setEnabled(true);
		}
		outBox8->setSelectedId(1, dontSendNotification);
		m_loopTab->resetLoop(7);

        //[/UserButtonCode_loadButton8]
    }
    else if (buttonThatWasClicked == playButton8)
    {
        //[UserButtonCode_playButton8] -- add your button handler code here..

		if (m_midi != nullptr)
			m_midi->playLoop(7);

        //[/UserButtonCode_playButton8]
    }
    else if (buttonThatWasClicked == stopButton8)
    {
        //[UserButtonCode_stopButton8] -- add your button handler code here..

		if (m_midi != nullptr)
			m_midi->stopLoop(7);

        //[/UserButtonCode_stopButton8]
    }

    //[UserbuttonClicked_Post]
    //[/UserbuttonClicked_Post]
}

void SetupTab::comboBoxChanged (ComboBox* comboBoxThatHasChanged)
{
    //[UsercomboBoxChanged_Pre]
    //[/UsercomboBoxChanged_Pre]

    if (comboBoxThatHasChanged == outBox1)
    {
        //[UserComboBoxCode_outBox1] -- add your combo box handling code here..

		if (m_midi != nullptr)
			m_midi->sendLoopOutput(0, outBox1->getSelectedId() - 1);

        //[/UserComboBoxCode_outBox1]
    }
    else if (comboBoxThatHasChanged == outBox2)
    {
        //[UserComboBoxCode_outBox2] -- add your combo box handling code here..

		if (m_midi != nullptr)
			m_midi->sendLoopOutput(1, outBox2->getSelectedId() - 1);

        //[/UserComboBoxCode_outBox2]
    }
    else if (comboBoxThatHasChanged == outBox3)
    {
        //[UserComboBoxCode_outBox3] -- add your combo box handling code here..

		if (m_midi != nullptr)
			m_midi->sendLoopOutput(2, outBox3->getSelectedId() - 1);

        //[/UserComboBoxCode_outBox3]
    }
    else if (comboBoxThatHasChanged == outBox4)
    {
        //[UserComboBoxCode_outBox4] -- add your combo box handling code here..

		if (m_midi != nullptr)
			m_midi->sendLoopOutput(3, outBox4->getSelectedId() - 1);

        //[/UserComboBoxCode_outBox4]
    }
    else if (comboBoxThatHasChanged == outBox5)
    {
        //[UserComboBoxCode_outBox5] -- add your combo box handling code here..

		if (m_midi != nullptr)
			m_midi->sendLoopOutput(4, outBox5->getSelectedId() - 1);

        //[/UserComboBoxCode_outBox5]
    }
    else if (comboBoxThatHasChanged == outBox6)
    {
        //[UserComboBoxCode_outBox6] -- add your combo box handling code here..

		if (m_midi != nullptr)
			m_midi->sendLoopOutput(5, outBox6->getSelectedId() - 1);

        //[/UserComboBoxCode_outBox6]
    }
    else if (comboBoxThatHasChanged == outBox7)
    {
        //[UserComboBoxCode_outBox7] -- add your combo box handling code here..

		if (m_midi != nullptr)
			m_midi->sendLoopOutput(6, outBox7->getSelectedId() - 1);

        //[/UserComboBoxCode_outBox7]
    }
    else if (comboBoxThatHasChanged == outBox8)
    {
        //[UserComboBoxCode_outBox8] -- add your combo box handling code here..

		if (m_midi != nullptr)
			m_midi->sendLoopOutput(7, outBox8->getSelectedId() - 1);

        //[/UserComboBoxCode_outBox8]
    }

    //[UsercomboBoxChanged_Post]
    //[/UsercomboBoxChanged_Post]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...

//==============================================================================
void SetupTab::timerCallback()
{
}

// **************************************************************************
// setMidiComponent
// **************************************************************************
void SetupTab::setMidiComponent(MidiTab * m) {

	m_midi = (MidiTab *)m;
}

// **************************************************************************
// setLoopComponent
// **************************************************************************
void SetupTab::setLoopComponent(LoopTab * l) {

	m_loopTab = (LoopTab *)l;
}

//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="SetupTab" componentName=""
                 parentClasses="public Component, private Timer" constructorParams=""
                 variableInitialisers="" snapPixels="8" snapActive="1" snapShown="1"
                 overlayOpacity="0.330" fixedSize="0" initialWidth="600" initialHeight="400">
  <BACKGROUND backgroundColour="ff000000"/>
  <LABEL name="new label" id="891385fb643ca0e1" memberName="label2" virtualName=""
         explicitFocusOrder="0" pos="25 43 55 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Track" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="18"
         kerning="0" bold="0" italic="0" justification="33"/>
  <TEXTBUTTON name="load button" id="6a45a2cab1798591" memberName="loadButton1"
              virtualName="" explicitFocusOrder="1" pos="98 71 54 40" bgColOn="ff0044eb"
              buttonText="Load" connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTEDITOR name="new text editor" id="e4b05b9d06893d10" memberName="trackText1"
              virtualName="" explicitFocusOrder="0" pos="20 73 62 36" textcol="ff007bff"
              bkgcol="ff000000" outlinecol="ffffffff" initialText="9" multiline="0"
              retKeyStartsLine="0" readonly="0" scrollbars="1" caret="1" popupmenu="1"/>
  <TEXTBUTTON name="play button" id="dff4f4993ddc4dc8" memberName="playButton1"
              virtualName="" explicitFocusOrder="0" pos="247 71 54 40" bgColOn="ff0044eb"
              buttonText="Play" connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="stop button" id="3611a309b022b9b1" memberName="stopButton1"
              virtualName="" explicitFocusOrder="0" pos="314 71 54 40" bgColOn="ff0044eb"
              buttonText="Stop" connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <COMBOBOX name="new combo box" id="34cd9e7a6f065a44" memberName="outBox1"
            virtualName="" explicitFocusOrder="0" pos="165 73 68 36" editable="0"
            layout="33" items="" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <LABEL name="new label" id="c43733348c50dc35" memberName="label3" virtualName=""
         explicitFocusOrder="0" pos="169 43 63 24" edTextCol="ff000000"
         edBkgCol="0" labelText="Output" editableSingleClick="0" editableDoubleClick="0"
         focusDiscardsChanges="0" fontname="Default font" fontsize="18"
         kerning="0" bold="0" italic="0" justification="33"/>
  <TEXTBUTTON name="load button" id="15d63d708154e655" memberName="loadButton2"
              virtualName="" explicitFocusOrder="0" pos="98 127 54 40" bgColOn="ff0044eb"
              buttonText="Load" connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTEDITOR name="new text editor" id="32ba12395a2d817e" memberName="trackText2"
              virtualName="" explicitFocusOrder="0" pos="20 129 62 36" textcol="ff007bff"
              bkgcol="ff000000" outlinecol="ffffffff" initialText="9" multiline="0"
              retKeyStartsLine="0" readonly="0" scrollbars="1" caret="1" popupmenu="1"/>
  <TEXTBUTTON name="play button" id="8f4fd854e803424f" memberName="playButton2"
              virtualName="" explicitFocusOrder="0" pos="247 127 54 40" bgColOn="ff0044eb"
              buttonText="Play" connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="stop button" id="81ce0edd9f0766ed" memberName="stopButton2"
              virtualName="" explicitFocusOrder="0" pos="314 127 54 40" bgColOn="ff0044eb"
              buttonText="Stop" connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <COMBOBOX name="new combo box" id="c3a3163e256754f8" memberName="outBox2"
            virtualName="" explicitFocusOrder="0" pos="165 129 68 36" editable="0"
            layout="33" items="" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <TEXTBUTTON name="load button" id="7d64216397ea8b4d" memberName="loadButton3"
              virtualName="" explicitFocusOrder="0" pos="98 183 54 38" bgColOn="ff0044eb"
              buttonText="Load" connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTEDITOR name="new text editor" id="6878787fe209de50" memberName="trackText3"
              virtualName="" explicitFocusOrder="0" pos="20 185 62 36" textcol="ff007bff"
              bkgcol="ff000000" outlinecol="ffffffff" initialText="9" multiline="0"
              retKeyStartsLine="0" readonly="0" scrollbars="1" caret="1" popupmenu="1"/>
  <TEXTBUTTON name="play button" id="530ed41a70f5e320" memberName="playButton3"
              virtualName="" explicitFocusOrder="0" pos="247 183 54 40" bgColOn="ff0044eb"
              buttonText="Play" connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="stop button" id="20f83ab676014259" memberName="stopButton3"
              virtualName="" explicitFocusOrder="0" pos="314 183 54 40" bgColOn="ff0044eb"
              buttonText="Stop" connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <COMBOBOX name="new combo box" id="9069e98898eaa9b" memberName="outBox3"
            virtualName="" explicitFocusOrder="0" pos="165 185 68 36" editable="0"
            layout="33" items="" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <TEXTBUTTON name="load button" id="1f06155e95a78e3c" memberName="loadButton4"
              virtualName="" explicitFocusOrder="0" pos="98 240 54 40" bgColOn="ff0044eb"
              buttonText="Load" connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTEDITOR name="new text editor" id="6b986317566fdda5" memberName="trackText4"
              virtualName="" explicitFocusOrder="0" pos="20 242 62 36" textcol="ff007bff"
              bkgcol="ff000000" outlinecol="ffffffff" initialText="9" multiline="0"
              retKeyStartsLine="0" readonly="0" scrollbars="1" caret="1" popupmenu="1"/>
  <TEXTBUTTON name="play button" id="8e6050ecda3d5b61" memberName="playButton4"
              virtualName="" explicitFocusOrder="0" pos="247 240 54 40" bgColOn="ff0044eb"
              buttonText="Play" connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="stop button" id="9205d4b4cba59e0d" memberName="stopButton4"
              virtualName="" explicitFocusOrder="0" pos="314 240 54 40" bgColOn="ff0044eb"
              buttonText="Stop" connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <COMBOBOX name="new combo box" id="efd562be92d0042e" memberName="outBox4"
            virtualName="" explicitFocusOrder="0" pos="165 242 68 36" editable="0"
            layout="33" items="" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <TEXTBUTTON name="load button" id="323883fa30782e7" memberName="loadButton5"
              virtualName="" explicitFocusOrder="0" pos="98 296 54 40" bgColOn="ff0044eb"
              buttonText="Load" connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTEDITOR name="new text editor" id="40a2f5d90ef9de3" memberName="trackText5"
              virtualName="" explicitFocusOrder="0" pos="20 298 62 36" textcol="ff007bff"
              bkgcol="ff000000" outlinecol="ffffffff" initialText="9" multiline="0"
              retKeyStartsLine="0" readonly="0" scrollbars="1" caret="1" popupmenu="1"/>
  <TEXTBUTTON name="play button" id="a8ed8f87bec200f2" memberName="playButton5"
              virtualName="" explicitFocusOrder="0" pos="247 296 54 40" bgColOn="ff0044eb"
              buttonText="Play" connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="stop button" id="af2b67d37c6214b1" memberName="stopButton5"
              virtualName="" explicitFocusOrder="0" pos="314 296 54 40" bgColOn="ff0044eb"
              buttonText="Stop" connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <COMBOBOX name="new combo box" id="2552e120eb060921" memberName="outBox5"
            virtualName="" explicitFocusOrder="0" pos="165 298 68 36" editable="0"
            layout="33" items="" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <TEXTBUTTON name="load button" id="31bae71db1254acd" memberName="loadButton6"
              virtualName="" explicitFocusOrder="0" pos="98 352 54 40" bgColOn="ff0044eb"
              buttonText="Load" connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTEDITOR name="new text editor" id="bc42e3d620460244" memberName="trackText6"
              virtualName="" explicitFocusOrder="0" pos="20 354 62 36" textcol="ff007bff"
              bkgcol="ff000000" outlinecol="ffffffff" initialText="9" multiline="0"
              retKeyStartsLine="0" readonly="0" scrollbars="1" caret="1" popupmenu="1"/>
  <TEXTBUTTON name="play button" id="33af3f74698d2274" memberName="playButton6"
              virtualName="" explicitFocusOrder="0" pos="247 352 54 40" bgColOn="ff0044eb"
              buttonText="Play" connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="stop button" id="c1f34217708fb19f" memberName="stopButton6"
              virtualName="" explicitFocusOrder="0" pos="314 352 54 40" bgColOn="ff0044eb"
              buttonText="Stop" connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <COMBOBOX name="new combo box" id="a30d2bee150f9209" memberName="outBox6"
            virtualName="" explicitFocusOrder="0" pos="165 354 68 36" editable="0"
            layout="33" items="" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <TEXTBUTTON name="load button" id="6c5917fafb2c6a95" memberName="loadButton7"
              virtualName="" explicitFocusOrder="0" pos="98 408 54 40" bgColOn="ff0044eb"
              buttonText="Load" connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTEDITOR name="new text editor" id="6be79823fa553ce0" memberName="trackText7"
              virtualName="" explicitFocusOrder="0" pos="20 410 62 36" textcol="ff007bff"
              bkgcol="ff000000" outlinecol="ffffffff" initialText="9" multiline="0"
              retKeyStartsLine="0" readonly="0" scrollbars="1" caret="1" popupmenu="1"/>
  <TEXTBUTTON name="play button" id="78f87d836ae805a2" memberName="playButton7"
              virtualName="" explicitFocusOrder="0" pos="247 408 54 40" bgColOn="ff0044eb"
              buttonText="Play" connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="stop button" id="3f65fe13f37a4559" memberName="stopButton7"
              virtualName="" explicitFocusOrder="0" pos="314 408 54 40" bgColOn="ff0044eb"
              buttonText="Stop" connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <COMBOBOX name="new combo box" id="93abf1258c5bd28e" memberName="outBox7"
            virtualName="" explicitFocusOrder="0" pos="165 410 68 36" editable="0"
            layout="33" items="" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
  <TEXTBUTTON name="load button" id="47383e4763c1ac31" memberName="loadButton8"
              virtualName="" explicitFocusOrder="0" pos="98 465 54 40" bgColOn="ff0044eb"
              buttonText="Load" connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTEDITOR name="new text editor" id="d5196687e5b9f9df" memberName="trackText8"
              virtualName="" explicitFocusOrder="0" pos="20 467 62 36" textcol="ff007bff"
              bkgcol="ff000000" outlinecol="ffffffff" initialText="9" multiline="0"
              retKeyStartsLine="0" readonly="0" scrollbars="1" caret="1" popupmenu="1"/>
  <TEXTBUTTON name="play button" id="efad5635874ed114" memberName="playButton8"
              virtualName="" explicitFocusOrder="0" pos="247 465 54 40" bgColOn="ff0044eb"
              buttonText="Play" connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <TEXTBUTTON name="stop button" id="3ea2fd8af069018e" memberName="stopButton8"
              virtualName="" explicitFocusOrder="0" pos="314 465 54 40" bgColOn="ff0044eb"
              buttonText="Stop" connectedEdges="15" needsCallback="1" radioGroupId="0"/>
  <COMBOBOX name="new combo box" id="961498e87a9de875" memberName="outBox8"
            virtualName="" explicitFocusOrder="0" pos="165 467 68 36" editable="0"
            layout="33" items="" textWhenNonSelected="" textWhenNoItems="(no choices)"/>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]

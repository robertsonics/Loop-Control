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

#pragma once

//[Headers]     -- You can add your own extra header files here --
#include "../JuceLibraryCode/JuceHeader.h"

#define CMD_OFFSET_VOLUME	0
#define CMD_OFFSET_PITCH	1
#define CMD_OFFSET_SPEED	2
#define CMD_OFFSET_START	3
#define CMD_OFFSET_LENGTH	4
#define CMD_OFFSET_BALANCE	5
#define CMD_OFFSET_OUTPUT	6
#define CMD_OFFSET_SYNC		7
#define CMD_OFFSET_LOAD		8
#define CMD_OFFSET_PLAY		9
#define CMD_OFFSET_STOP		10
#define CMD_OFFSET_RESET	11
#define CMD_OFFSET_DIVIDE   12

//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Projucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class MidiTab  : public Component,
                 private MidiInputCallback,
                 public ComboBox::Listener,
                 public Button::Listener
{
public:
    //==============================================================================
    MidiTab ();
    ~MidiTab();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.

	void sendLoopVol(int loop, int val);
	void sendLoopPitch(int loop, int val);
	void sendLoopSpeed(int loop, int val);
	void sendLoopStart(int loop, int val);
	void sendLoopLen(int loop, int val);
	void sendLoopDivide(int loop, int val);

	void loadLoop(int loop, int trk);
	void playLoop(int loop);
	void stopLoop(int loop);
	void resetLoop(int loop);

	void sendStopAll();

	void sendLoopBalance(int loop, int val);
	void sendLoopOutput(int loop, int val);
	void sendLoopSyncFlag(int loop, bool state);

	void sendNRPN14(int p, int v);
	void sendNRPN7(int p, int v);

	void setMidiInput(int index);
	void setMidiOutput(int index);
	void handleIncomingMidiMessage(MidiInput *source, const MidiMessage &message);

    //[/UserMethods]

    void paint (Graphics& g) override;
    void resized() override;
    void comboBoxChanged (ComboBox* comboBoxThatHasChanged) override;
    void buttonClicked (Button* buttonThatWasClicked) override;



private:
    //[UserVariables]   -- You can add your own custom variables in this section.

	AudioDeviceManager deviceManager;
	int lastInputIndex;

	ScopedPointer<MidiOutput> currentMidiOutput;

    //[/UserVariables]

    //==============================================================================
    ScopedPointer<Label> label;
    ScopedPointer<ComboBox> midiBox;
    ScopedPointer<TextButton> connectButton;
    ScopedPointer<TextButton> scanButton;
    ScopedPointer<Label> label2;
    ScopedPointer<Label> label3;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MidiTab)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

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

class MidiTab;

#define NUM_LOOPS		8
#define DEFAULT_VOLUME	12000
#define DEFAULT_BALANCE	8192
#define DEFAULT_PITCH	8192
#define DEFAULT_SPEED	8192
#define DEFAULT_START	0
#define DEFAULT_LENGTH	16383

typedef struct {
	int vol;
	int bal;
	int pitch;
	int speed;
	int start;
	int len;
	int divide;
	bool sync;
	bool lock;
} LOOP_DYNAMICS_STRUCTURE;

//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Projucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class LoopTab  : public Component,
                 private Timer,
                 public ComboBox::Listener,
                 public Slider::Listener,
                 public Button::Listener
{
public:
    //==============================================================================
    LoopTab ();
    ~LoopTab();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.

	void setMidiComponent(MidiTab * m);
	void showLoop(int i);
	void resetLoop(int i);
	void timerCallback() override;

    //[/UserMethods]

    void paint (Graphics& g) override;
    void resized() override;
    void comboBoxChanged (ComboBox* comboBoxThatHasChanged) override;
    void sliderValueChanged (Slider* sliderThatWasMoved) override;
    void buttonClicked (Button* buttonThatWasClicked) override;



private:
    //[UserVariables]   -- You can add your own custom variables in this section.

	MidiTab * m_midi;
	LOOP_DYNAMICS_STRUCTURE m_loop[NUM_LOOPS];
	LOOP_DYNAMICS_STRUCTURE m_loopLast[NUM_LOOPS];

    //[/UserVariables]

    //==============================================================================
    ScopedPointer<ComboBox> loopBox;
    ScopedPointer<Slider> slider1;
    ScopedPointer<Slider> slider2;
    ScopedPointer<Slider> slider4;
    ScopedPointer<Slider> slider5;
    ScopedPointer<Label> label;
    ScopedPointer<Label> label2;
    ScopedPointer<Label> label3;
    ScopedPointer<Label> label4;
    ScopedPointer<Label> label6;
    ScopedPointer<TextButton> resetPitchButton;
    ScopedPointer<TextButton> resetSpeedButton;
    ScopedPointer<TextButton> divideButton;
    ScopedPointer<TextButton> startButton;
    ScopedPointer<ToggleButton> syncToggle;
    ScopedPointer<ToggleButton> lockToggle;
    ScopedPointer<TextButton> StopAllButton;
    ScopedPointer<TextButton> stopButton;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (LoopTab)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

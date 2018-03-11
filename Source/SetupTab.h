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
class LoopTab;


//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Projucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class SetupTab  : public Component,
                  private Timer,
                  public Button::Listener,
                  public ComboBox::Listener
{
public:
    //==============================================================================
    SetupTab ();
    ~SetupTab();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.

	void setMidiComponent(MidiTab * m);
	void setLoopComponent(LoopTab * l);
	void timerCallback() override;

    //[/UserMethods]

    void paint (Graphics& g) override;
    void resized() override;
    void buttonClicked (Button* buttonThatWasClicked) override;
    void comboBoxChanged (ComboBox* comboBoxThatHasChanged) override;



private:
    //[UserVariables]   -- You can add your own custom variables in this section.

	MidiTab * m_midi;
	LoopTab * m_loopTab;

    //[/UserVariables]

    //==============================================================================
    ScopedPointer<Label> label2;
    ScopedPointer<TextButton> loadButton1;
    ScopedPointer<TextEditor> trackText1;
    ScopedPointer<TextButton> playButton1;
    ScopedPointer<TextButton> stopButton1;
    ScopedPointer<ComboBox> outBox1;
    ScopedPointer<Label> label3;
    ScopedPointer<TextButton> loadButton2;
    ScopedPointer<TextEditor> trackText2;
    ScopedPointer<TextButton> playButton2;
    ScopedPointer<TextButton> stopButton2;
    ScopedPointer<ComboBox> outBox2;
    ScopedPointer<TextButton> loadButton3;
    ScopedPointer<TextEditor> trackText3;
    ScopedPointer<TextButton> playButton3;
    ScopedPointer<TextButton> stopButton3;
    ScopedPointer<ComboBox> outBox3;
    ScopedPointer<TextButton> loadButton4;
    ScopedPointer<TextEditor> trackText4;
    ScopedPointer<TextButton> playButton4;
    ScopedPointer<TextButton> stopButton4;
    ScopedPointer<ComboBox> outBox4;
    ScopedPointer<TextButton> loadButton5;
    ScopedPointer<TextEditor> trackText5;
    ScopedPointer<TextButton> playButton5;
    ScopedPointer<TextButton> stopButton5;
    ScopedPointer<ComboBox> outBox5;
    ScopedPointer<TextButton> loadButton6;
    ScopedPointer<TextEditor> trackText6;
    ScopedPointer<TextButton> playButton6;
    ScopedPointer<TextButton> stopButton6;
    ScopedPointer<ComboBox> outBox6;
    ScopedPointer<TextButton> loadButton7;
    ScopedPointer<TextEditor> trackText7;
    ScopedPointer<TextButton> playButton7;
    ScopedPointer<TextButton> stopButton7;
    ScopedPointer<ComboBox> outBox7;
    ScopedPointer<TextButton> loadButton8;
    ScopedPointer<TextEditor> trackText8;
    ScopedPointer<TextButton> playButton8;
    ScopedPointer<TextButton> stopButton8;
    ScopedPointer<ComboBox> outBox8;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (SetupTab)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

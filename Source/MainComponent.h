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
#include "Commands.h"
#include "SetupTab.h"
#include "MidiTab.h"
#include "LoopTab.h"
#include "TriggerTab.h"


class MyLookAndFeel : public LookAndFeel_V4
{
public:
    MyLookAndFeel()
    {

    }
    int getTabButtonBestWidth(TabBarButton& button, int tabDepth)
    {
        TabbedButtonBar* bar = button.findParentComponentOfClass<TabbedButtonBar>();
        if (bar && bar->getNumTabs() > 0)
            return bar->getWidth() / bar->getNumTabs();
        else
            return 50;
    }
	//int getSliderThumbRadius(Slider& slider)
	//{
	//	return 80;
	//}

};


//[/Headers]



//==============================================================================
/**
                                                                    //[Comments]
    An auto-generated component, created by the Projucer.

    Describe your class and how it works here!
                                                                    //[/Comments]
*/
class MainComponent  : public Component,
                       public ChangeListener
{
public:
    //==============================================================================
    MainComponent ();
    ~MainComponent();

    //==============================================================================
    //[UserMethods]     -- You can add your own custom methods in this section.

	void changeListenerCallback(ChangeBroadcaster *);

    MyLookAndFeel myLookAndFeel;

    //[/UserMethods]

    void paint (Graphics& g) override;
    void resized() override;



private:
    //[UserVariables]   -- You can add your own custom variables in this section.

	TriggerTab *triggerTab;
	MidiTab *midiTab;
	SetupTab *setupTab;
	LoopTab *loopTab;

    //[/UserVariables]

    //==============================================================================
    ScopedPointer<TabbedComponent> tabbedComponent;


    //==============================================================================
    JUCE_DECLARE_NON_COPYABLE_WITH_LEAK_DETECTOR (MainComponent)
};

//[EndFile] You can add extra defines here...
//[/EndFile]

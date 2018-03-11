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
//[/Headers]

#include "MainComponent.h"


//[MiscUserDefs] You can add your own user definitions and misc code here...
//[/MiscUserDefs]

//==============================================================================
MainComponent::MainComponent ()
{
    //[Constructor_pre] You can add your own custom stuff here..
    //[/Constructor_pre]

    addAndMakeVisible (tabbedComponent = new TabbedComponent (TabbedButtonBar::TabsAtBottom));
    tabbedComponent->setTabBarDepth (39);
    tabbedComponent->addTab (TRANS("MIDI"), Colours::black, new MidiTab(), true);
    tabbedComponent->addTab (TRANS("SET"), Colours::black, new SetupTab(), true);
    tabbedComponent->addTab (TRANS("LOOP"), Colours::black, new LoopTab(), true);
    tabbedComponent->addTab (TRANS("TRIG"), Colours::black, new TriggerTab(), true);
    tabbedComponent->setCurrentTabIndex (0);


    //[UserPreSize]
    //[/UserPreSize]

    setSize (300, 550);


    //[Constructor] You can add your own custom stuff here..

	// Subclass some LookAndFeel things
    LookAndFeel::setDefaultLookAndFeel(&myLookAndFeel);
    TabbedButtonBar& bar = tabbedComponent->getTabbedButtonBar();
    bar.setColour(TabbedButtonBar::tabTextColourId, Colour (0xff007Bff));

	// Get pointers to all the tabs
	midiTab = (MidiTab *)tabbedComponent->getTabContentComponent(0);
	setupTab = (SetupTab *)tabbedComponent->getTabContentComponent(1);
	loopTab = (LoopTab *)tabbedComponent->getTabContentComponent(2);
	triggerTab = (TriggerTab *)tabbedComponent->getTabContentComponent(3);

	// Pass a pointer to the MidiTab to the other tabs so they can send
	//  MIDI output.
	loopTab->setMidiComponent((MidiTab *)midiTab);
	triggerTab->setMidiComponent((MidiTab *)midiTab);
	setupTab->setMidiComponent((MidiTab *)midiTab);

	// Pass LoopTab pointer to SetupTab
	setupTab->setLoopComponent((LoopTab *)loopTab);

    //[/Constructor]
}

MainComponent::~MainComponent()
{
    //[Destructor_pre]. You can add your own custom destruction code here..

    //[/Destructor_pre]

    tabbedComponent = nullptr;


    //[Destructor]. You can add your own custom destruction code here..
    //[/Destructor]
}

//==============================================================================
void MainComponent::paint (Graphics& g)
{
    //[UserPrePaint] Add your own custom painting code here..
    //[/UserPrePaint]

    g.fillAll (Colours::black);

    //[UserPaint] Add your own custom painting code here..
    //[/UserPaint]
}

void MainComponent::resized()
{
    //[UserPreResize] Add your own custom resize code here..
    //[/UserPreResize]

    tabbedComponent->setBounds (0, 0, proportionOfWidth (1.0000f), proportionOfHeight (1.0000f));
    //[UserResized] Add your own custom resize handling here..
    //[/UserResized]
}



//[MiscUserCode] You can add your own definitions of your custom methods or any other code here...


// ******************************************************************
//  changeListenerCallback
// ******************************************************************
void MainComponent::changeListenerCallback(ChangeBroadcaster *)
{

}

//[/MiscUserCode]


//==============================================================================
#if 0
/*  -- Projucer information section --

    This is where the Projucer stores the metadata that describe this GUI layout, so
    make changes in here at your peril!

BEGIN_JUCER_METADATA

<JUCER_COMPONENT documentType="Component" className="MainComponent" componentName=""
                 parentClasses="public Component, public ChangeListener" constructorParams=""
                 variableInitialisers="" snapPixels="8" snapActive="1" snapShown="1"
                 overlayOpacity="0.330" fixedSize="0" initialWidth="300" initialHeight="550">
  <BACKGROUND backgroundColour="ff000000"/>
  <TABBEDCOMPONENT name="new tabbed component" id="44e5d6688799e570" memberName="tabbedComponent"
                   virtualName="" explicitFocusOrder="0" pos="0 0 100% 100%" orientation="bottom"
                   tabBarDepth="39" initialTab="0">
    <TAB name="MIDI" colour="ff000000" useJucerComp="0" contentClassName="MidiTab"
         constructorParams="" jucerComponentFile=""/>
    <TAB name="SET" colour="ff000000" useJucerComp="0" contentClassName="SetupTab"
         constructorParams="" jucerComponentFile=""/>
    <TAB name="LOOP" colour="ff000000" useJucerComp="0" contentClassName="LoopTab"
         constructorParams="" jucerComponentFile=""/>
    <TAB name="TRIG" colour="ff000000" useJucerComp="0" contentClassName="TriggerTab"
         constructorParams="" jucerComponentFile=""/>
  </TABBEDCOMPONENT>
</JUCER_COMPONENT>

END_JUCER_METADATA
*/
#endif


//[EndFile] You can add extra defines here...
//[/EndFile]

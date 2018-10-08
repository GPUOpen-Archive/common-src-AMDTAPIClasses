//==================================================================================
// Copyright (c) 2016 , Advanced Micro Devices, Inc.  All rights reserved.
//
/// \author AMD Developer Tools Team
/// \file apAddWatchEvent.h
///
//==================================================================================
#ifndef __APADDWATCHEVENT_H
#define __APADDWATCHEVENT_H


// Local:
#include <AMDTAPIClasses/Include/Events/apMDIViewCreateEvent.h>

/// This class represents an event created when a watch is added.
class AP_API apAddWatchEvent : public apMDIViewCreateEvent
{
public:

    apAddWatchEvent();
    apAddWatchEvent(const gtString& watchExpression);

    // Overrides osTransferableObject:
    virtual osTransferableObjectType type() const;
    virtual bool writeSelfIntoChannel(osChannel& ipcChannel) const;
    virtual bool readSelfFromChannel(osChannel& ipcChannel);

    // Overrides apEvent:
    virtual EventType eventType() const;
    virtual apEvent* clone() const;

    // The watch expression:
    gtString watchExpression() const {return m_watchExpression;};

protected:

    // The watch expression:
    gtString m_watchExpression;

};

#endif //__APADDWATCHEVENT_H


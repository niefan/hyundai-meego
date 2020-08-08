/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -c DTCAdaptor -a dtc_adaptor com.lge.car.micom.dtc.xml
 *
 * qdbusxml2cpp is Copyright (C) 2012 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * Do not edit! All changes made to it will be lost.
 */

#include "dtc_adaptor.h"
#include <QtCore/QMetaObject>
#include <QtCore/QByteArray>
#include <QtCore/QList>
#include <QtCore/QMap>
#include <QtCore/QString>
#include <QtCore/QStringList>
#include <QtCore/QVariant>

/*
 * Implementation of adaptor class DTCAdaptor
 */

DTCAdaptor::DTCAdaptor(QObject *parent)
    : QDBusAbstractAdaptor(parent)
{
    // constructor
    setAutoRelaySignals(true);
}

DTCAdaptor::~DTCAdaptor()
{
    // destructor
}

QByteArray DTCAdaptor::LgeDBus_AskMOST_RBDRequest()
{
    // handle method call com.lge.car.micom.dtc.LgeDBus_AskMOST_RBDRequest
    QByteArray out0;
    QMetaObject::invokeMethod(parent(), "LgeDBus_AskMOST_RBDRequest", Q_RETURN_ARG(QByteArray, out0));
    return out0;
}

void DTCAdaptor::LgeDBus_AutoTestKeyControl(const QByteArray &in0)
{
    // handle method call com.lge.car.micom.dtc.LgeDBus_AutoTestKeyControl
    QMetaObject::invokeMethod(parent(), "LgeDBus_AutoTestKeyControl", Q_ARG(QByteArray, in0));
}

void DTCAdaptor::LgeDBus_AuxMicCompleteMsg(uchar in0)
{
    // handle method call com.lge.car.micom.dtc.LgeDBus_AuxMicCompleteMsg
    QMetaObject::invokeMethod(parent(), "LgeDBus_AuxMicCompleteMsg", Q_ARG(uchar, in0));
}

void DTCAdaptor::LgeDBus_CANTPMicomRecv()
{
    // handle method call com.lge.car.micom.dtc.LgeDBus_CANTPMicomRecv
    QMetaObject::invokeMethod(parent(), "LgeDBus_CANTPMicomRecv");
}

void DTCAdaptor::LgeDBus_CANTPSendMsg(const QByteArray &in0)
{
    // handle method call com.lge.car.micom.dtc.LgeDBus_CANTPSendMsg
    QMetaObject::invokeMethod(parent(), "LgeDBus_CANTPSendMsg", Q_ARG(QByteArray, in0));
}

void DTCAdaptor::LgeDBus_DTCClearRequest(uchar in0)
{
    // handle method call com.lge.car.micom.dtc.LgeDBus_DTCClearRequest
    QMetaObject::invokeMethod(parent(), "LgeDBus_DTCClearRequest", Q_ARG(uchar, in0));
}

void DTCAdaptor::LgeDBus_DTCReadRequest(const QByteArray &in0)
{
    // handle method call com.lge.car.micom.dtc.LgeDBus_DTCReadRequest
    QMetaObject::invokeMethod(parent(), "LgeDBus_DTCReadRequest", Q_ARG(QByteArray, in0));
}

void DTCAdaptor::LgeDBus_DTCSendMsg(const QByteArray &in0)
{
    // handle method call com.lge.car.micom.dtc.LgeDBus_DTCSendMsg
    QMetaObject::invokeMethod(parent(), "LgeDBus_DTCSendMsg", Q_ARG(QByteArray, in0));
}

void DTCAdaptor::LgeDBus_KeyTouchRandomTest(const QByteArray &in0)
{
    // handle method call com.lge.car.micom.dtc.LgeDBus_KeyTouchRandomTest
    QMetaObject::invokeMethod(parent(), "LgeDBus_KeyTouchRandomTest", Q_ARG(QByteArray, in0));
}

void DTCAdaptor::LgeDBus_MOSTResetRequest()
{
    // handle method call com.lge.car.micom.dtc.LgeDBus_MOSTResetRequest
    QMetaObject::invokeMethod(parent(), "LgeDBus_MOSTResetRequest");
}

void DTCAdaptor::LgeDBus_NaviSCCDateSend(const QByteArray &in0)
{
    // handle method call com.lge.car.micom.dtc.LgeDBus_NaviSCCDateSend
    QMetaObject::invokeMethod(parent(), "LgeDBus_NaviSCCDateSend", Q_ARG(QByteArray, in0));
}

void DTCAdaptor::LgeDBus_TouchCleanup()
{
    // handle method call com.lge.car.micom.dtc.LgeDBus_TouchCleanup
    QMetaObject::invokeMethod(parent(), "LgeDBus_TouchCleanup");
}

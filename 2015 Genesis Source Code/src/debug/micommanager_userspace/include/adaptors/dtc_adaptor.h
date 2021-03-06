/*
 * This file was generated by qdbusxml2cpp version 0.7
 * Command line was: qdbusxml2cpp -c DTCAdaptor -a dtc_adaptor com.lge.car.micom.dtc.xml
 *
 * qdbusxml2cpp is Copyright (C) 2012 Nokia Corporation and/or its subsidiary(-ies).
 *
 * This is an auto-generated file.
 * This file may have been hand-edited. Look for HAND-EDIT comments
 * before re-generating it.
 */

#ifndef DTC_ADAPTOR_H_1370928849
#define DTC_ADAPTOR_H_1370928849

#include <QtCore/QObject>
#include <QtDBus/QtDBus>
class QByteArray;
template<class T> class QList;
template<class Key, class Value> class QMap;
class QString;
class QStringList;
class QVariant;

/*
 * Adaptor class for interface com.lge.car.micom.dtc
 */
class DTCAdaptor: public QDBusAbstractAdaptor
{
    Q_OBJECT
    Q_CLASSINFO("D-Bus Interface", "com.lge.car.micom.dtc")
    Q_CLASSINFO("D-Bus Introspection", ""
"  <interface name=\"com.lge.car.micom.dtc\">\n"
"    <method name=\"LgeDBus_DTCSendMsg\">\n"
"      <!-- 0x018A 20120325(in:4byte) -->\n"
"      <arg direction=\"in\" type=\"ay\"/>\n"
"    </method>\n"
"    <method name=\"LgeDBus_TouchCleanup\"/>\n"
"    <method name=\"LgeDBus_DTCReadRequest\">\n"
"      <!-- 0x028A 20120325(in:2bytes) -->\n"
"      <!-- 0x828A 20120325(in:variable) -->\n"
"      <arg direction=\"in\" type=\"ay\"/>\n"
"    </method>\n"
"    <method name=\"LgeDBus_DTCClearRequest\">\n"
"      <!-- 0x028B 20120325(in:1bytes) -->\n"
"      <!-- 0x828B 20120325(in:2byte) -->\n"
"      <arg direction=\"in\" type=\"y\"/>\n"
"    </method>\n"
"    <method name=\"LgeDBus_AskMOST_RBDRequest\">\n"
"      <!-- 0x0261 20120510 -->\n"
"      <!-- RECV : 0x8261 20120510(in:2byte) -->\n"
"      <arg direction=\"out\" type=\"ay\"/>\n"
"    </method>\n"
"    <method name=\"LgeDBus_MOSTResetRequest\"/>\n"
"    <!-- 0x0262 20120518 -->\n"
"    <method name=\"LgeDBus_CANTPSendMsg\">\n"
"      <!-- 0x0189 20120403(in:variable) -->\n"
"      <!-- RECV : 0x8389 20120403(in:variable) -->\n"
"      <arg direction=\"in\" type=\"ay\"/>\n"
"    </method>\n"
"    <method name=\"LgeDBus_AutoTestKeyControl\">\n"
"      <!-- 0x0171 20120919(in:variable) -->\n"
"      <arg direction=\"in\" type=\"ay\"/>\n"
"    </method>\n"
"    <method name=\"LgeDBus_CANTPMicomRecv\"/>\n"
"    <!-- 0x0403 20120514(in:11byte) -->\n"
"    <method name=\"LgeDBus_AuxMicCompleteMsg\">\n"
"      <!-- 0x018B 20121220(in:1bytes) -->\n"
"      <arg direction=\"in\" type=\"y\"/>\n"
"    </method>\n"
"    <method name=\"LgeDBus_NaviSCCDateSend\">\n"
"      <!-- 0x0199 20130110 -->\n"
"      <arg direction=\"in\" type=\"ay\"/>\n"
"    </method>\n"
"    <method name=\"LgeDBus_KeyTouchRandomTest\">\n"
"      <!-- 0x0665 20130611 -->\n"
"      <arg direction=\"in\" type=\"ay\"/>\n"
"    </method>\n"
"    <signal name=\"LgeDBus_NaviSCCMsgTriggerEvent\"/>\n"
"    <!-- 0x8396 from micom -->\n"
"    <signal name=\"LgeDBus_EventDTCClearResponse\">\n"
"      <!-- 0x828B from micom (out:variable)-->\n"
"      <arg direction=\"out\" type=\"ay\"/>\n"
"    </signal>\n"
"    <signal name=\"LgeDBus_EventDTCReadResponse\">\n"
"      <!-- 0x828A from micom (out:variable)-->\n"
"      <arg direction=\"out\" type=\"ay\"/>\n"
"    </signal>\n"
"    <signal name=\"LgeDBus_EventCANTPMicomSend\">\n"
"      <!-- 0x8404 from micom (out:11byte)-->\n"
"      <arg direction=\"out\" type=\"ay\"/>\n"
"    </signal>\n"
"    <signal name=\"LgeDBus_EventEDT\">\n"
"      <!-- 0x8376 from micom (out:1byte)-->\n"
"      <arg direction=\"out\" type=\"ay\"/>\n"
"    </signal>\n"
"    <signal name=\"LgeDBus_AuxMicStatusEvent\">\n"
"      <!-- 0x8377 from micom (out:1byte)-->\n"
"      <arg direction=\"out\" type=\"y\"/>\n"
"    </signal>\n"
"  </interface>\n"
        "")
public:
    DTCAdaptor(QObject *parent);
    virtual ~DTCAdaptor();

public: // PROPERTIES
public Q_SLOTS: // METHODS
    QByteArray LgeDBus_AskMOST_RBDRequest();
    void LgeDBus_AutoTestKeyControl(const QByteArray &in0);
    void LgeDBus_AuxMicCompleteMsg(uchar in0);
    void LgeDBus_CANTPMicomRecv();
    void LgeDBus_CANTPSendMsg(const QByteArray &in0);
    void LgeDBus_DTCClearRequest(uchar in0);
    void LgeDBus_DTCReadRequest(const QByteArray &in0);
    void LgeDBus_DTCSendMsg(const QByteArray &in0);
    void LgeDBus_KeyTouchRandomTest(const QByteArray &in0);
    void LgeDBus_MOSTResetRequest();
    void LgeDBus_NaviSCCDateSend(const QByteArray &in0);
    void LgeDBus_TouchCleanup();
Q_SIGNALS: // SIGNALS
    void LgeDBus_AuxMicStatusEvent(uchar in0);
    void LgeDBus_EventCANTPMicomSend(const QByteArray &in0);
    void LgeDBus_EventDTCClearResponse(const QByteArray &in0);
    void LgeDBus_EventDTCReadResponse(const QByteArray &in0);
    void LgeDBus_EventEDT(const QByteArray &in0);
    void LgeDBus_NaviSCCMsgTriggerEvent();
};

#endif

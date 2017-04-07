#pragma once
// MESSAGE AA241X_HIGH PACKING

#define MAVLINK_MSG_ID_AA241X_HIGH 160

MAVPACKED(
typedef struct __mavlink_aa241x_high_t {
 uint64_t timestamp; /*< The time the data was sent*/
 float field1; /*< Field 1*/
 float field2; /*< Field 2*/
 float field3; /*< Field 3*/
 float field4; /*< Field 4*/
 float field5; /*< Field 5*/
 float field6; /*< Field 6*/
 float field7; /*< Field 7*/
 float field8; /*< Field 8*/
 float field9; /*< Field 9*/
 float field10; /*< Field 10*/
 float field11; /*< Field 11*/
 float field12; /*< Field 12*/
 float field13; /*< Field 13*/
 float field14; /*< Field 14*/
 float field15; /*< Field 15*/
 float field16; /*< Field 16*/
}) mavlink_aa241x_high_t;

#define MAVLINK_MSG_ID_AA241X_HIGH_LEN 72
#define MAVLINK_MSG_ID_AA241X_HIGH_MIN_LEN 72
#define MAVLINK_MSG_ID_160_LEN 72
#define MAVLINK_MSG_ID_160_MIN_LEN 72

#define MAVLINK_MSG_ID_AA241X_HIGH_CRC 107
#define MAVLINK_MSG_ID_160_CRC 107



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_AA241X_HIGH { \
    160, \
    "AA241X_HIGH", \
    17, \
    {  { "timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_aa241x_high_t, timestamp) }, \
         { "field1", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_aa241x_high_t, field1) }, \
         { "field2", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_aa241x_high_t, field2) }, \
         { "field3", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_aa241x_high_t, field3) }, \
         { "field4", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_aa241x_high_t, field4) }, \
         { "field5", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_aa241x_high_t, field5) }, \
         { "field6", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_aa241x_high_t, field6) }, \
         { "field7", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_aa241x_high_t, field7) }, \
         { "field8", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_aa241x_high_t, field8) }, \
         { "field9", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_aa241x_high_t, field9) }, \
         { "field10", NULL, MAVLINK_TYPE_FLOAT, 0, 44, offsetof(mavlink_aa241x_high_t, field10) }, \
         { "field11", NULL, MAVLINK_TYPE_FLOAT, 0, 48, offsetof(mavlink_aa241x_high_t, field11) }, \
         { "field12", NULL, MAVLINK_TYPE_FLOAT, 0, 52, offsetof(mavlink_aa241x_high_t, field12) }, \
         { "field13", NULL, MAVLINK_TYPE_FLOAT, 0, 56, offsetof(mavlink_aa241x_high_t, field13) }, \
         { "field14", NULL, MAVLINK_TYPE_FLOAT, 0, 60, offsetof(mavlink_aa241x_high_t, field14) }, \
         { "field15", NULL, MAVLINK_TYPE_FLOAT, 0, 64, offsetof(mavlink_aa241x_high_t, field15) }, \
         { "field16", NULL, MAVLINK_TYPE_FLOAT, 0, 68, offsetof(mavlink_aa241x_high_t, field16) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_AA241X_HIGH { \
    "AA241X_HIGH", \
    17, \
    {  { "timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_aa241x_high_t, timestamp) }, \
         { "field1", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_aa241x_high_t, field1) }, \
         { "field2", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_aa241x_high_t, field2) }, \
         { "field3", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_aa241x_high_t, field3) }, \
         { "field4", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_aa241x_high_t, field4) }, \
         { "field5", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_aa241x_high_t, field5) }, \
         { "field6", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_aa241x_high_t, field6) }, \
         { "field7", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_aa241x_high_t, field7) }, \
         { "field8", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_aa241x_high_t, field8) }, \
         { "field9", NULL, MAVLINK_TYPE_FLOAT, 0, 40, offsetof(mavlink_aa241x_high_t, field9) }, \
         { "field10", NULL, MAVLINK_TYPE_FLOAT, 0, 44, offsetof(mavlink_aa241x_high_t, field10) }, \
         { "field11", NULL, MAVLINK_TYPE_FLOAT, 0, 48, offsetof(mavlink_aa241x_high_t, field11) }, \
         { "field12", NULL, MAVLINK_TYPE_FLOAT, 0, 52, offsetof(mavlink_aa241x_high_t, field12) }, \
         { "field13", NULL, MAVLINK_TYPE_FLOAT, 0, 56, offsetof(mavlink_aa241x_high_t, field13) }, \
         { "field14", NULL, MAVLINK_TYPE_FLOAT, 0, 60, offsetof(mavlink_aa241x_high_t, field14) }, \
         { "field15", NULL, MAVLINK_TYPE_FLOAT, 0, 64, offsetof(mavlink_aa241x_high_t, field15) }, \
         { "field16", NULL, MAVLINK_TYPE_FLOAT, 0, 68, offsetof(mavlink_aa241x_high_t, field16) }, \
         } \
}
#endif

/**
 * @brief Pack a aa241x_high message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp The time the data was sent
 * @param field1 Field 1
 * @param field2 Field 2
 * @param field3 Field 3
 * @param field4 Field 4
 * @param field5 Field 5
 * @param field6 Field 6
 * @param field7 Field 7
 * @param field8 Field 8
 * @param field9 Field 9
 * @param field10 Field 10
 * @param field11 Field 11
 * @param field12 Field 12
 * @param field13 Field 13
 * @param field14 Field 14
 * @param field15 Field 15
 * @param field16 Field 16
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_aa241x_high_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t timestamp, float field1, float field2, float field3, float field4, float field5, float field6, float field7, float field8, float field9, float field10, float field11, float field12, float field13, float field14, float field15, float field16)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AA241X_HIGH_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_float(buf, 8, field1);
    _mav_put_float(buf, 12, field2);
    _mav_put_float(buf, 16, field3);
    _mav_put_float(buf, 20, field4);
    _mav_put_float(buf, 24, field5);
    _mav_put_float(buf, 28, field6);
    _mav_put_float(buf, 32, field7);
    _mav_put_float(buf, 36, field8);
    _mav_put_float(buf, 40, field9);
    _mav_put_float(buf, 44, field10);
    _mav_put_float(buf, 48, field11);
    _mav_put_float(buf, 52, field12);
    _mav_put_float(buf, 56, field13);
    _mav_put_float(buf, 60, field14);
    _mav_put_float(buf, 64, field15);
    _mav_put_float(buf, 68, field16);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AA241X_HIGH_LEN);
#else
    mavlink_aa241x_high_t packet;
    packet.timestamp = timestamp;
    packet.field1 = field1;
    packet.field2 = field2;
    packet.field3 = field3;
    packet.field4 = field4;
    packet.field5 = field5;
    packet.field6 = field6;
    packet.field7 = field7;
    packet.field8 = field8;
    packet.field9 = field9;
    packet.field10 = field10;
    packet.field11 = field11;
    packet.field12 = field12;
    packet.field13 = field13;
    packet.field14 = field14;
    packet.field15 = field15;
    packet.field16 = field16;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AA241X_HIGH_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AA241X_HIGH;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_AA241X_HIGH_MIN_LEN, MAVLINK_MSG_ID_AA241X_HIGH_LEN, MAVLINK_MSG_ID_AA241X_HIGH_CRC);
}

/**
 * @brief Pack a aa241x_high message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param timestamp The time the data was sent
 * @param field1 Field 1
 * @param field2 Field 2
 * @param field3 Field 3
 * @param field4 Field 4
 * @param field5 Field 5
 * @param field6 Field 6
 * @param field7 Field 7
 * @param field8 Field 8
 * @param field9 Field 9
 * @param field10 Field 10
 * @param field11 Field 11
 * @param field12 Field 12
 * @param field13 Field 13
 * @param field14 Field 14
 * @param field15 Field 15
 * @param field16 Field 16
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_aa241x_high_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t timestamp,float field1,float field2,float field3,float field4,float field5,float field6,float field7,float field8,float field9,float field10,float field11,float field12,float field13,float field14,float field15,float field16)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AA241X_HIGH_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_float(buf, 8, field1);
    _mav_put_float(buf, 12, field2);
    _mav_put_float(buf, 16, field3);
    _mav_put_float(buf, 20, field4);
    _mav_put_float(buf, 24, field5);
    _mav_put_float(buf, 28, field6);
    _mav_put_float(buf, 32, field7);
    _mav_put_float(buf, 36, field8);
    _mav_put_float(buf, 40, field9);
    _mav_put_float(buf, 44, field10);
    _mav_put_float(buf, 48, field11);
    _mav_put_float(buf, 52, field12);
    _mav_put_float(buf, 56, field13);
    _mav_put_float(buf, 60, field14);
    _mav_put_float(buf, 64, field15);
    _mav_put_float(buf, 68, field16);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AA241X_HIGH_LEN);
#else
    mavlink_aa241x_high_t packet;
    packet.timestamp = timestamp;
    packet.field1 = field1;
    packet.field2 = field2;
    packet.field3 = field3;
    packet.field4 = field4;
    packet.field5 = field5;
    packet.field6 = field6;
    packet.field7 = field7;
    packet.field8 = field8;
    packet.field9 = field9;
    packet.field10 = field10;
    packet.field11 = field11;
    packet.field12 = field12;
    packet.field13 = field13;
    packet.field14 = field14;
    packet.field15 = field15;
    packet.field16 = field16;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AA241X_HIGH_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AA241X_HIGH;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_AA241X_HIGH_MIN_LEN, MAVLINK_MSG_ID_AA241X_HIGH_LEN, MAVLINK_MSG_ID_AA241X_HIGH_CRC);
}

/**
 * @brief Encode a aa241x_high struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param aa241x_high C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_aa241x_high_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_aa241x_high_t* aa241x_high)
{
    return mavlink_msg_aa241x_high_pack(system_id, component_id, msg, aa241x_high->timestamp, aa241x_high->field1, aa241x_high->field2, aa241x_high->field3, aa241x_high->field4, aa241x_high->field5, aa241x_high->field6, aa241x_high->field7, aa241x_high->field8, aa241x_high->field9, aa241x_high->field10, aa241x_high->field11, aa241x_high->field12, aa241x_high->field13, aa241x_high->field14, aa241x_high->field15, aa241x_high->field16);
}

/**
 * @brief Encode a aa241x_high struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param aa241x_high C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_aa241x_high_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_aa241x_high_t* aa241x_high)
{
    return mavlink_msg_aa241x_high_pack_chan(system_id, component_id, chan, msg, aa241x_high->timestamp, aa241x_high->field1, aa241x_high->field2, aa241x_high->field3, aa241x_high->field4, aa241x_high->field5, aa241x_high->field6, aa241x_high->field7, aa241x_high->field8, aa241x_high->field9, aa241x_high->field10, aa241x_high->field11, aa241x_high->field12, aa241x_high->field13, aa241x_high->field14, aa241x_high->field15, aa241x_high->field16);
}

/**
 * @brief Send a aa241x_high message
 * @param chan MAVLink channel to send the message
 *
 * @param timestamp The time the data was sent
 * @param field1 Field 1
 * @param field2 Field 2
 * @param field3 Field 3
 * @param field4 Field 4
 * @param field5 Field 5
 * @param field6 Field 6
 * @param field7 Field 7
 * @param field8 Field 8
 * @param field9 Field 9
 * @param field10 Field 10
 * @param field11 Field 11
 * @param field12 Field 12
 * @param field13 Field 13
 * @param field14 Field 14
 * @param field15 Field 15
 * @param field16 Field 16
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_aa241x_high_send(mavlink_channel_t chan, uint64_t timestamp, float field1, float field2, float field3, float field4, float field5, float field6, float field7, float field8, float field9, float field10, float field11, float field12, float field13, float field14, float field15, float field16)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AA241X_HIGH_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_float(buf, 8, field1);
    _mav_put_float(buf, 12, field2);
    _mav_put_float(buf, 16, field3);
    _mav_put_float(buf, 20, field4);
    _mav_put_float(buf, 24, field5);
    _mav_put_float(buf, 28, field6);
    _mav_put_float(buf, 32, field7);
    _mav_put_float(buf, 36, field8);
    _mav_put_float(buf, 40, field9);
    _mav_put_float(buf, 44, field10);
    _mav_put_float(buf, 48, field11);
    _mav_put_float(buf, 52, field12);
    _mav_put_float(buf, 56, field13);
    _mav_put_float(buf, 60, field14);
    _mav_put_float(buf, 64, field15);
    _mav_put_float(buf, 68, field16);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AA241X_HIGH, buf, MAVLINK_MSG_ID_AA241X_HIGH_MIN_LEN, MAVLINK_MSG_ID_AA241X_HIGH_LEN, MAVLINK_MSG_ID_AA241X_HIGH_CRC);
#else
    mavlink_aa241x_high_t packet;
    packet.timestamp = timestamp;
    packet.field1 = field1;
    packet.field2 = field2;
    packet.field3 = field3;
    packet.field4 = field4;
    packet.field5 = field5;
    packet.field6 = field6;
    packet.field7 = field7;
    packet.field8 = field8;
    packet.field9 = field9;
    packet.field10 = field10;
    packet.field11 = field11;
    packet.field12 = field12;
    packet.field13 = field13;
    packet.field14 = field14;
    packet.field15 = field15;
    packet.field16 = field16;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AA241X_HIGH, (const char *)&packet, MAVLINK_MSG_ID_AA241X_HIGH_MIN_LEN, MAVLINK_MSG_ID_AA241X_HIGH_LEN, MAVLINK_MSG_ID_AA241X_HIGH_CRC);
#endif
}

/**
 * @brief Send a aa241x_high message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_aa241x_high_send_struct(mavlink_channel_t chan, const mavlink_aa241x_high_t* aa241x_high)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_aa241x_high_send(chan, aa241x_high->timestamp, aa241x_high->field1, aa241x_high->field2, aa241x_high->field3, aa241x_high->field4, aa241x_high->field5, aa241x_high->field6, aa241x_high->field7, aa241x_high->field8, aa241x_high->field9, aa241x_high->field10, aa241x_high->field11, aa241x_high->field12, aa241x_high->field13, aa241x_high->field14, aa241x_high->field15, aa241x_high->field16);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AA241X_HIGH, (const char *)aa241x_high, MAVLINK_MSG_ID_AA241X_HIGH_MIN_LEN, MAVLINK_MSG_ID_AA241X_HIGH_LEN, MAVLINK_MSG_ID_AA241X_HIGH_CRC);
#endif
}

#if MAVLINK_MSG_ID_AA241X_HIGH_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_aa241x_high_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t timestamp, float field1, float field2, float field3, float field4, float field5, float field6, float field7, float field8, float field9, float field10, float field11, float field12, float field13, float field14, float field15, float field16)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_float(buf, 8, field1);
    _mav_put_float(buf, 12, field2);
    _mav_put_float(buf, 16, field3);
    _mav_put_float(buf, 20, field4);
    _mav_put_float(buf, 24, field5);
    _mav_put_float(buf, 28, field6);
    _mav_put_float(buf, 32, field7);
    _mav_put_float(buf, 36, field8);
    _mav_put_float(buf, 40, field9);
    _mav_put_float(buf, 44, field10);
    _mav_put_float(buf, 48, field11);
    _mav_put_float(buf, 52, field12);
    _mav_put_float(buf, 56, field13);
    _mav_put_float(buf, 60, field14);
    _mav_put_float(buf, 64, field15);
    _mav_put_float(buf, 68, field16);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AA241X_HIGH, buf, MAVLINK_MSG_ID_AA241X_HIGH_MIN_LEN, MAVLINK_MSG_ID_AA241X_HIGH_LEN, MAVLINK_MSG_ID_AA241X_HIGH_CRC);
#else
    mavlink_aa241x_high_t *packet = (mavlink_aa241x_high_t *)msgbuf;
    packet->timestamp = timestamp;
    packet->field1 = field1;
    packet->field2 = field2;
    packet->field3 = field3;
    packet->field4 = field4;
    packet->field5 = field5;
    packet->field6 = field6;
    packet->field7 = field7;
    packet->field8 = field8;
    packet->field9 = field9;
    packet->field10 = field10;
    packet->field11 = field11;
    packet->field12 = field12;
    packet->field13 = field13;
    packet->field14 = field14;
    packet->field15 = field15;
    packet->field16 = field16;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AA241X_HIGH, (const char *)packet, MAVLINK_MSG_ID_AA241X_HIGH_MIN_LEN, MAVLINK_MSG_ID_AA241X_HIGH_LEN, MAVLINK_MSG_ID_AA241X_HIGH_CRC);
#endif
}
#endif

#endif

// MESSAGE AA241X_HIGH UNPACKING


/**
 * @brief Get field timestamp from aa241x_high message
 *
 * @return The time the data was sent
 */
static inline uint64_t mavlink_msg_aa241x_high_get_timestamp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field field1 from aa241x_high message
 *
 * @return Field 1
 */
static inline float mavlink_msg_aa241x_high_get_field1(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field field2 from aa241x_high message
 *
 * @return Field 2
 */
static inline float mavlink_msg_aa241x_high_get_field2(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field field3 from aa241x_high message
 *
 * @return Field 3
 */
static inline float mavlink_msg_aa241x_high_get_field3(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field field4 from aa241x_high message
 *
 * @return Field 4
 */
static inline float mavlink_msg_aa241x_high_get_field4(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field field5 from aa241x_high message
 *
 * @return Field 5
 */
static inline float mavlink_msg_aa241x_high_get_field5(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field field6 from aa241x_high message
 *
 * @return Field 6
 */
static inline float mavlink_msg_aa241x_high_get_field6(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Get field field7 from aa241x_high message
 *
 * @return Field 7
 */
static inline float mavlink_msg_aa241x_high_get_field7(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  32);
}

/**
 * @brief Get field field8 from aa241x_high message
 *
 * @return Field 8
 */
static inline float mavlink_msg_aa241x_high_get_field8(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  36);
}

/**
 * @brief Get field field9 from aa241x_high message
 *
 * @return Field 9
 */
static inline float mavlink_msg_aa241x_high_get_field9(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  40);
}

/**
 * @brief Get field field10 from aa241x_high message
 *
 * @return Field 10
 */
static inline float mavlink_msg_aa241x_high_get_field10(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  44);
}

/**
 * @brief Get field field11 from aa241x_high message
 *
 * @return Field 11
 */
static inline float mavlink_msg_aa241x_high_get_field11(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  48);
}

/**
 * @brief Get field field12 from aa241x_high message
 *
 * @return Field 12
 */
static inline float mavlink_msg_aa241x_high_get_field12(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  52);
}

/**
 * @brief Get field field13 from aa241x_high message
 *
 * @return Field 13
 */
static inline float mavlink_msg_aa241x_high_get_field13(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  56);
}

/**
 * @brief Get field field14 from aa241x_high message
 *
 * @return Field 14
 */
static inline float mavlink_msg_aa241x_high_get_field14(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  60);
}

/**
 * @brief Get field field15 from aa241x_high message
 *
 * @return Field 15
 */
static inline float mavlink_msg_aa241x_high_get_field15(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  64);
}

/**
 * @brief Get field field16 from aa241x_high message
 *
 * @return Field 16
 */
static inline float mavlink_msg_aa241x_high_get_field16(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  68);
}

/**
 * @brief Decode a aa241x_high message into a struct
 *
 * @param msg The message to decode
 * @param aa241x_high C-struct to decode the message contents into
 */
static inline void mavlink_msg_aa241x_high_decode(const mavlink_message_t* msg, mavlink_aa241x_high_t* aa241x_high)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    aa241x_high->timestamp = mavlink_msg_aa241x_high_get_timestamp(msg);
    aa241x_high->field1 = mavlink_msg_aa241x_high_get_field1(msg);
    aa241x_high->field2 = mavlink_msg_aa241x_high_get_field2(msg);
    aa241x_high->field3 = mavlink_msg_aa241x_high_get_field3(msg);
    aa241x_high->field4 = mavlink_msg_aa241x_high_get_field4(msg);
    aa241x_high->field5 = mavlink_msg_aa241x_high_get_field5(msg);
    aa241x_high->field6 = mavlink_msg_aa241x_high_get_field6(msg);
    aa241x_high->field7 = mavlink_msg_aa241x_high_get_field7(msg);
    aa241x_high->field8 = mavlink_msg_aa241x_high_get_field8(msg);
    aa241x_high->field9 = mavlink_msg_aa241x_high_get_field9(msg);
    aa241x_high->field10 = mavlink_msg_aa241x_high_get_field10(msg);
    aa241x_high->field11 = mavlink_msg_aa241x_high_get_field11(msg);
    aa241x_high->field12 = mavlink_msg_aa241x_high_get_field12(msg);
    aa241x_high->field13 = mavlink_msg_aa241x_high_get_field13(msg);
    aa241x_high->field14 = mavlink_msg_aa241x_high_get_field14(msg);
    aa241x_high->field15 = mavlink_msg_aa241x_high_get_field15(msg);
    aa241x_high->field16 = mavlink_msg_aa241x_high_get_field16(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_AA241X_HIGH_LEN? msg->len : MAVLINK_MSG_ID_AA241X_HIGH_LEN;
        memset(aa241x_high, 0, MAVLINK_MSG_ID_AA241X_HIGH_LEN);
    memcpy(aa241x_high, _MAV_PAYLOAD(msg), len);
#endif
}

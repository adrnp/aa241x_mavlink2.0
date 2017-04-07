#pragma once
// MESSAGE AA241X_WATER_DROP_RESULT PACKING

#define MAVLINK_MSG_ID_AA241X_WATER_DROP_RESULT 155

MAVPACKED(
typedef struct __mavlink_aa241x_water_drop_result_t {
 uint64_t mission_time; /*< Mission time in microseconds at which the water was dropped*/
 uint8_t success; /*< 1 if successfully dropped, 0 otherwise*/
 uint8_t i; /*< i coordinate in the grid*/
 uint8_t j; /*< j coordinate in the grid*/
}) mavlink_aa241x_water_drop_result_t;

#define MAVLINK_MSG_ID_AA241X_WATER_DROP_RESULT_LEN 11
#define MAVLINK_MSG_ID_AA241X_WATER_DROP_RESULT_MIN_LEN 11
#define MAVLINK_MSG_ID_155_LEN 11
#define MAVLINK_MSG_ID_155_MIN_LEN 11

#define MAVLINK_MSG_ID_AA241X_WATER_DROP_RESULT_CRC 86
#define MAVLINK_MSG_ID_155_CRC 86



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_AA241X_WATER_DROP_RESULT { \
    155, \
    "AA241X_WATER_DROP_RESULT", \
    4, \
    {  { "mission_time", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_aa241x_water_drop_result_t, mission_time) }, \
         { "success", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_aa241x_water_drop_result_t, success) }, \
         { "i", NULL, MAVLINK_TYPE_UINT8_T, 0, 9, offsetof(mavlink_aa241x_water_drop_result_t, i) }, \
         { "j", NULL, MAVLINK_TYPE_UINT8_T, 0, 10, offsetof(mavlink_aa241x_water_drop_result_t, j) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_AA241X_WATER_DROP_RESULT { \
    "AA241X_WATER_DROP_RESULT", \
    4, \
    {  { "mission_time", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_aa241x_water_drop_result_t, mission_time) }, \
         { "success", NULL, MAVLINK_TYPE_UINT8_T, 0, 8, offsetof(mavlink_aa241x_water_drop_result_t, success) }, \
         { "i", NULL, MAVLINK_TYPE_UINT8_T, 0, 9, offsetof(mavlink_aa241x_water_drop_result_t, i) }, \
         { "j", NULL, MAVLINK_TYPE_UINT8_T, 0, 10, offsetof(mavlink_aa241x_water_drop_result_t, j) }, \
         } \
}
#endif

/**
 * @brief Pack a aa241x_water_drop_result message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param mission_time Mission time in microseconds at which the water was dropped
 * @param success 1 if successfully dropped, 0 otherwise
 * @param i i coordinate in the grid
 * @param j j coordinate in the grid
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_aa241x_water_drop_result_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t mission_time, uint8_t success, uint8_t i, uint8_t j)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AA241X_WATER_DROP_RESULT_LEN];
    _mav_put_uint64_t(buf, 0, mission_time);
    _mav_put_uint8_t(buf, 8, success);
    _mav_put_uint8_t(buf, 9, i);
    _mav_put_uint8_t(buf, 10, j);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AA241X_WATER_DROP_RESULT_LEN);
#else
    mavlink_aa241x_water_drop_result_t packet;
    packet.mission_time = mission_time;
    packet.success = success;
    packet.i = i;
    packet.j = j;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AA241X_WATER_DROP_RESULT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AA241X_WATER_DROP_RESULT;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_AA241X_WATER_DROP_RESULT_MIN_LEN, MAVLINK_MSG_ID_AA241X_WATER_DROP_RESULT_LEN, MAVLINK_MSG_ID_AA241X_WATER_DROP_RESULT_CRC);
}

/**
 * @brief Pack a aa241x_water_drop_result message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param mission_time Mission time in microseconds at which the water was dropped
 * @param success 1 if successfully dropped, 0 otherwise
 * @param i i coordinate in the grid
 * @param j j coordinate in the grid
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_aa241x_water_drop_result_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t mission_time,uint8_t success,uint8_t i,uint8_t j)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AA241X_WATER_DROP_RESULT_LEN];
    _mav_put_uint64_t(buf, 0, mission_time);
    _mav_put_uint8_t(buf, 8, success);
    _mav_put_uint8_t(buf, 9, i);
    _mav_put_uint8_t(buf, 10, j);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AA241X_WATER_DROP_RESULT_LEN);
#else
    mavlink_aa241x_water_drop_result_t packet;
    packet.mission_time = mission_time;
    packet.success = success;
    packet.i = i;
    packet.j = j;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AA241X_WATER_DROP_RESULT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AA241X_WATER_DROP_RESULT;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_AA241X_WATER_DROP_RESULT_MIN_LEN, MAVLINK_MSG_ID_AA241X_WATER_DROP_RESULT_LEN, MAVLINK_MSG_ID_AA241X_WATER_DROP_RESULT_CRC);
}

/**
 * @brief Encode a aa241x_water_drop_result struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param aa241x_water_drop_result C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_aa241x_water_drop_result_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_aa241x_water_drop_result_t* aa241x_water_drop_result)
{
    return mavlink_msg_aa241x_water_drop_result_pack(system_id, component_id, msg, aa241x_water_drop_result->mission_time, aa241x_water_drop_result->success, aa241x_water_drop_result->i, aa241x_water_drop_result->j);
}

/**
 * @brief Encode a aa241x_water_drop_result struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param aa241x_water_drop_result C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_aa241x_water_drop_result_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_aa241x_water_drop_result_t* aa241x_water_drop_result)
{
    return mavlink_msg_aa241x_water_drop_result_pack_chan(system_id, component_id, chan, msg, aa241x_water_drop_result->mission_time, aa241x_water_drop_result->success, aa241x_water_drop_result->i, aa241x_water_drop_result->j);
}

/**
 * @brief Send a aa241x_water_drop_result message
 * @param chan MAVLink channel to send the message
 *
 * @param mission_time Mission time in microseconds at which the water was dropped
 * @param success 1 if successfully dropped, 0 otherwise
 * @param i i coordinate in the grid
 * @param j j coordinate in the grid
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_aa241x_water_drop_result_send(mavlink_channel_t chan, uint64_t mission_time, uint8_t success, uint8_t i, uint8_t j)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AA241X_WATER_DROP_RESULT_LEN];
    _mav_put_uint64_t(buf, 0, mission_time);
    _mav_put_uint8_t(buf, 8, success);
    _mav_put_uint8_t(buf, 9, i);
    _mav_put_uint8_t(buf, 10, j);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AA241X_WATER_DROP_RESULT, buf, MAVLINK_MSG_ID_AA241X_WATER_DROP_RESULT_MIN_LEN, MAVLINK_MSG_ID_AA241X_WATER_DROP_RESULT_LEN, MAVLINK_MSG_ID_AA241X_WATER_DROP_RESULT_CRC);
#else
    mavlink_aa241x_water_drop_result_t packet;
    packet.mission_time = mission_time;
    packet.success = success;
    packet.i = i;
    packet.j = j;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AA241X_WATER_DROP_RESULT, (const char *)&packet, MAVLINK_MSG_ID_AA241X_WATER_DROP_RESULT_MIN_LEN, MAVLINK_MSG_ID_AA241X_WATER_DROP_RESULT_LEN, MAVLINK_MSG_ID_AA241X_WATER_DROP_RESULT_CRC);
#endif
}

/**
 * @brief Send a aa241x_water_drop_result message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_aa241x_water_drop_result_send_struct(mavlink_channel_t chan, const mavlink_aa241x_water_drop_result_t* aa241x_water_drop_result)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_aa241x_water_drop_result_send(chan, aa241x_water_drop_result->mission_time, aa241x_water_drop_result->success, aa241x_water_drop_result->i, aa241x_water_drop_result->j);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AA241X_WATER_DROP_RESULT, (const char *)aa241x_water_drop_result, MAVLINK_MSG_ID_AA241X_WATER_DROP_RESULT_MIN_LEN, MAVLINK_MSG_ID_AA241X_WATER_DROP_RESULT_LEN, MAVLINK_MSG_ID_AA241X_WATER_DROP_RESULT_CRC);
#endif
}

#if MAVLINK_MSG_ID_AA241X_WATER_DROP_RESULT_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_aa241x_water_drop_result_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t mission_time, uint8_t success, uint8_t i, uint8_t j)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, mission_time);
    _mav_put_uint8_t(buf, 8, success);
    _mav_put_uint8_t(buf, 9, i);
    _mav_put_uint8_t(buf, 10, j);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AA241X_WATER_DROP_RESULT, buf, MAVLINK_MSG_ID_AA241X_WATER_DROP_RESULT_MIN_LEN, MAVLINK_MSG_ID_AA241X_WATER_DROP_RESULT_LEN, MAVLINK_MSG_ID_AA241X_WATER_DROP_RESULT_CRC);
#else
    mavlink_aa241x_water_drop_result_t *packet = (mavlink_aa241x_water_drop_result_t *)msgbuf;
    packet->mission_time = mission_time;
    packet->success = success;
    packet->i = i;
    packet->j = j;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AA241X_WATER_DROP_RESULT, (const char *)packet, MAVLINK_MSG_ID_AA241X_WATER_DROP_RESULT_MIN_LEN, MAVLINK_MSG_ID_AA241X_WATER_DROP_RESULT_LEN, MAVLINK_MSG_ID_AA241X_WATER_DROP_RESULT_CRC);
#endif
}
#endif

#endif

// MESSAGE AA241X_WATER_DROP_RESULT UNPACKING


/**
 * @brief Get field mission_time from aa241x_water_drop_result message
 *
 * @return Mission time in microseconds at which the water was dropped
 */
static inline uint64_t mavlink_msg_aa241x_water_drop_result_get_mission_time(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field success from aa241x_water_drop_result message
 *
 * @return 1 if successfully dropped, 0 otherwise
 */
static inline uint8_t mavlink_msg_aa241x_water_drop_result_get_success(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  8);
}

/**
 * @brief Get field i from aa241x_water_drop_result message
 *
 * @return i coordinate in the grid
 */
static inline uint8_t mavlink_msg_aa241x_water_drop_result_get_i(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  9);
}

/**
 * @brief Get field j from aa241x_water_drop_result message
 *
 * @return j coordinate in the grid
 */
static inline uint8_t mavlink_msg_aa241x_water_drop_result_get_j(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  10);
}

/**
 * @brief Decode a aa241x_water_drop_result message into a struct
 *
 * @param msg The message to decode
 * @param aa241x_water_drop_result C-struct to decode the message contents into
 */
static inline void mavlink_msg_aa241x_water_drop_result_decode(const mavlink_message_t* msg, mavlink_aa241x_water_drop_result_t* aa241x_water_drop_result)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    aa241x_water_drop_result->mission_time = mavlink_msg_aa241x_water_drop_result_get_mission_time(msg);
    aa241x_water_drop_result->success = mavlink_msg_aa241x_water_drop_result_get_success(msg);
    aa241x_water_drop_result->i = mavlink_msg_aa241x_water_drop_result_get_i(msg);
    aa241x_water_drop_result->j = mavlink_msg_aa241x_water_drop_result_get_j(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_AA241X_WATER_DROP_RESULT_LEN? msg->len : MAVLINK_MSG_ID_AA241X_WATER_DROP_RESULT_LEN;
        memset(aa241x_water_drop_result, 0, MAVLINK_MSG_ID_AA241X_WATER_DROP_RESULT_LEN);
    memcpy(aa241x_water_drop_result, _MAV_PAYLOAD(msg), len);
#endif
}

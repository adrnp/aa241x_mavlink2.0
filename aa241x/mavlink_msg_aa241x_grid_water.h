#pragma once
// MESSAGE AA241X_GRID_WATER PACKING

#define MAVLINK_MSG_ID_AA241X_GRID_WATER 158

MAVPACKED(
typedef struct __mavlink_aa241x_grid_water_t {
 uint64_t mission_time; /*< The time this grid was sent*/
 uint16_t water_cells[16]; /*< compact version of cells that are water*/
}) mavlink_aa241x_grid_water_t;

#define MAVLINK_MSG_ID_AA241X_GRID_WATER_LEN 40
#define MAVLINK_MSG_ID_AA241X_GRID_WATER_MIN_LEN 40
#define MAVLINK_MSG_ID_158_LEN 40
#define MAVLINK_MSG_ID_158_MIN_LEN 40

#define MAVLINK_MSG_ID_AA241X_GRID_WATER_CRC 100
#define MAVLINK_MSG_ID_158_CRC 100

#define MAVLINK_MSG_AA241X_GRID_WATER_FIELD_WATER_CELLS_LEN 16

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_AA241X_GRID_WATER { \
    158, \
    "AA241X_GRID_WATER", \
    2, \
    {  { "mission_time", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_aa241x_grid_water_t, mission_time) }, \
         { "water_cells", NULL, MAVLINK_TYPE_UINT16_T, 16, 8, offsetof(mavlink_aa241x_grid_water_t, water_cells) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_AA241X_GRID_WATER { \
    "AA241X_GRID_WATER", \
    2, \
    {  { "mission_time", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_aa241x_grid_water_t, mission_time) }, \
         { "water_cells", NULL, MAVLINK_TYPE_UINT16_T, 16, 8, offsetof(mavlink_aa241x_grid_water_t, water_cells) }, \
         } \
}
#endif

/**
 * @brief Pack a aa241x_grid_water message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param mission_time The time this grid was sent
 * @param water_cells compact version of cells that are water
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_aa241x_grid_water_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t mission_time, const uint16_t *water_cells)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AA241X_GRID_WATER_LEN];
    _mav_put_uint64_t(buf, 0, mission_time);
    _mav_put_uint16_t_array(buf, 8, water_cells, 16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AA241X_GRID_WATER_LEN);
#else
    mavlink_aa241x_grid_water_t packet;
    packet.mission_time = mission_time;
    mav_array_memcpy(packet.water_cells, water_cells, sizeof(uint16_t)*16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AA241X_GRID_WATER_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AA241X_GRID_WATER;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_AA241X_GRID_WATER_MIN_LEN, MAVLINK_MSG_ID_AA241X_GRID_WATER_LEN, MAVLINK_MSG_ID_AA241X_GRID_WATER_CRC);
}

/**
 * @brief Pack a aa241x_grid_water message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param mission_time The time this grid was sent
 * @param water_cells compact version of cells that are water
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_aa241x_grid_water_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t mission_time,const uint16_t *water_cells)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AA241X_GRID_WATER_LEN];
    _mav_put_uint64_t(buf, 0, mission_time);
    _mav_put_uint16_t_array(buf, 8, water_cells, 16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AA241X_GRID_WATER_LEN);
#else
    mavlink_aa241x_grid_water_t packet;
    packet.mission_time = mission_time;
    mav_array_memcpy(packet.water_cells, water_cells, sizeof(uint16_t)*16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AA241X_GRID_WATER_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AA241X_GRID_WATER;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_AA241X_GRID_WATER_MIN_LEN, MAVLINK_MSG_ID_AA241X_GRID_WATER_LEN, MAVLINK_MSG_ID_AA241X_GRID_WATER_CRC);
}

/**
 * @brief Encode a aa241x_grid_water struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param aa241x_grid_water C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_aa241x_grid_water_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_aa241x_grid_water_t* aa241x_grid_water)
{
    return mavlink_msg_aa241x_grid_water_pack(system_id, component_id, msg, aa241x_grid_water->mission_time, aa241x_grid_water->water_cells);
}

/**
 * @brief Encode a aa241x_grid_water struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param aa241x_grid_water C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_aa241x_grid_water_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_aa241x_grid_water_t* aa241x_grid_water)
{
    return mavlink_msg_aa241x_grid_water_pack_chan(system_id, component_id, chan, msg, aa241x_grid_water->mission_time, aa241x_grid_water->water_cells);
}

/**
 * @brief Send a aa241x_grid_water message
 * @param chan MAVLink channel to send the message
 *
 * @param mission_time The time this grid was sent
 * @param water_cells compact version of cells that are water
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_aa241x_grid_water_send(mavlink_channel_t chan, uint64_t mission_time, const uint16_t *water_cells)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AA241X_GRID_WATER_LEN];
    _mav_put_uint64_t(buf, 0, mission_time);
    _mav_put_uint16_t_array(buf, 8, water_cells, 16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AA241X_GRID_WATER, buf, MAVLINK_MSG_ID_AA241X_GRID_WATER_MIN_LEN, MAVLINK_MSG_ID_AA241X_GRID_WATER_LEN, MAVLINK_MSG_ID_AA241X_GRID_WATER_CRC);
#else
    mavlink_aa241x_grid_water_t packet;
    packet.mission_time = mission_time;
    mav_array_memcpy(packet.water_cells, water_cells, sizeof(uint16_t)*16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AA241X_GRID_WATER, (const char *)&packet, MAVLINK_MSG_ID_AA241X_GRID_WATER_MIN_LEN, MAVLINK_MSG_ID_AA241X_GRID_WATER_LEN, MAVLINK_MSG_ID_AA241X_GRID_WATER_CRC);
#endif
}

/**
 * @brief Send a aa241x_grid_water message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_aa241x_grid_water_send_struct(mavlink_channel_t chan, const mavlink_aa241x_grid_water_t* aa241x_grid_water)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_aa241x_grid_water_send(chan, aa241x_grid_water->mission_time, aa241x_grid_water->water_cells);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AA241X_GRID_WATER, (const char *)aa241x_grid_water, MAVLINK_MSG_ID_AA241X_GRID_WATER_MIN_LEN, MAVLINK_MSG_ID_AA241X_GRID_WATER_LEN, MAVLINK_MSG_ID_AA241X_GRID_WATER_CRC);
#endif
}

#if MAVLINK_MSG_ID_AA241X_GRID_WATER_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_aa241x_grid_water_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t mission_time, const uint16_t *water_cells)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, mission_time);
    _mav_put_uint16_t_array(buf, 8, water_cells, 16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AA241X_GRID_WATER, buf, MAVLINK_MSG_ID_AA241X_GRID_WATER_MIN_LEN, MAVLINK_MSG_ID_AA241X_GRID_WATER_LEN, MAVLINK_MSG_ID_AA241X_GRID_WATER_CRC);
#else
    mavlink_aa241x_grid_water_t *packet = (mavlink_aa241x_grid_water_t *)msgbuf;
    packet->mission_time = mission_time;
    mav_array_memcpy(packet->water_cells, water_cells, sizeof(uint16_t)*16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AA241X_GRID_WATER, (const char *)packet, MAVLINK_MSG_ID_AA241X_GRID_WATER_MIN_LEN, MAVLINK_MSG_ID_AA241X_GRID_WATER_LEN, MAVLINK_MSG_ID_AA241X_GRID_WATER_CRC);
#endif
}
#endif

#endif

// MESSAGE AA241X_GRID_WATER UNPACKING


/**
 * @brief Get field mission_time from aa241x_grid_water message
 *
 * @return The time this grid was sent
 */
static inline uint64_t mavlink_msg_aa241x_grid_water_get_mission_time(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field water_cells from aa241x_grid_water message
 *
 * @return compact version of cells that are water
 */
static inline uint16_t mavlink_msg_aa241x_grid_water_get_water_cells(const mavlink_message_t* msg, uint16_t *water_cells)
{
    return _MAV_RETURN_uint16_t_array(msg, water_cells, 16,  8);
}

/**
 * @brief Decode a aa241x_grid_water message into a struct
 *
 * @param msg The message to decode
 * @param aa241x_grid_water C-struct to decode the message contents into
 */
static inline void mavlink_msg_aa241x_grid_water_decode(const mavlink_message_t* msg, mavlink_aa241x_grid_water_t* aa241x_grid_water)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    aa241x_grid_water->mission_time = mavlink_msg_aa241x_grid_water_get_mission_time(msg);
    mavlink_msg_aa241x_grid_water_get_water_cells(msg, aa241x_grid_water->water_cells);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_AA241X_GRID_WATER_LEN? msg->len : MAVLINK_MSG_ID_AA241X_GRID_WATER_LEN;
        memset(aa241x_grid_water, 0, MAVLINK_MSG_ID_AA241X_GRID_WATER_LEN);
    memcpy(aa241x_grid_water, _MAV_PAYLOAD(msg), len);
#endif
}

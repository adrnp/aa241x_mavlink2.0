#pragma once
// MESSAGE AA241X_GRID_COMBINED PACKING

#define MAVLINK_MSG_ID_AA241X_GRID_COMBINED 159

MAVPACKED(
typedef struct __mavlink_aa241x_grid_combined_t {
 uint64_t mission_time; /*< The time this grid was sent*/
 uint32_t cell[12]; /*< compact version of cells info in bounds*/
}) mavlink_aa241x_grid_combined_t;

#define MAVLINK_MSG_ID_AA241X_GRID_COMBINED_LEN 56
#define MAVLINK_MSG_ID_AA241X_GRID_COMBINED_MIN_LEN 56
#define MAVLINK_MSG_ID_159_LEN 56
#define MAVLINK_MSG_ID_159_MIN_LEN 56

#define MAVLINK_MSG_ID_AA241X_GRID_COMBINED_CRC 215
#define MAVLINK_MSG_ID_159_CRC 215

#define MAVLINK_MSG_AA241X_GRID_COMBINED_FIELD_CELL_LEN 12

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_AA241X_GRID_COMBINED { \
    159, \
    "AA241X_GRID_COMBINED", \
    2, \
    {  { "mission_time", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_aa241x_grid_combined_t, mission_time) }, \
         { "cell", NULL, MAVLINK_TYPE_UINT32_T, 12, 8, offsetof(mavlink_aa241x_grid_combined_t, cell) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_AA241X_GRID_COMBINED { \
    "AA241X_GRID_COMBINED", \
    2, \
    {  { "mission_time", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_aa241x_grid_combined_t, mission_time) }, \
         { "cell", NULL, MAVLINK_TYPE_UINT32_T, 12, 8, offsetof(mavlink_aa241x_grid_combined_t, cell) }, \
         } \
}
#endif

/**
 * @brief Pack a aa241x_grid_combined message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param mission_time The time this grid was sent
 * @param cell compact version of cells info in bounds
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_aa241x_grid_combined_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t mission_time, const uint32_t *cell)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AA241X_GRID_COMBINED_LEN];
    _mav_put_uint64_t(buf, 0, mission_time);
    _mav_put_uint32_t_array(buf, 8, cell, 12);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AA241X_GRID_COMBINED_LEN);
#else
    mavlink_aa241x_grid_combined_t packet;
    packet.mission_time = mission_time;
    mav_array_memcpy(packet.cell, cell, sizeof(uint32_t)*12);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AA241X_GRID_COMBINED_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AA241X_GRID_COMBINED;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_AA241X_GRID_COMBINED_MIN_LEN, MAVLINK_MSG_ID_AA241X_GRID_COMBINED_LEN, MAVLINK_MSG_ID_AA241X_GRID_COMBINED_CRC);
}

/**
 * @brief Pack a aa241x_grid_combined message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param mission_time The time this grid was sent
 * @param cell compact version of cells info in bounds
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_aa241x_grid_combined_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t mission_time,const uint32_t *cell)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AA241X_GRID_COMBINED_LEN];
    _mav_put_uint64_t(buf, 0, mission_time);
    _mav_put_uint32_t_array(buf, 8, cell, 12);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AA241X_GRID_COMBINED_LEN);
#else
    mavlink_aa241x_grid_combined_t packet;
    packet.mission_time = mission_time;
    mav_array_memcpy(packet.cell, cell, sizeof(uint32_t)*12);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AA241X_GRID_COMBINED_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AA241X_GRID_COMBINED;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_AA241X_GRID_COMBINED_MIN_LEN, MAVLINK_MSG_ID_AA241X_GRID_COMBINED_LEN, MAVLINK_MSG_ID_AA241X_GRID_COMBINED_CRC);
}

/**
 * @brief Encode a aa241x_grid_combined struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param aa241x_grid_combined C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_aa241x_grid_combined_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_aa241x_grid_combined_t* aa241x_grid_combined)
{
    return mavlink_msg_aa241x_grid_combined_pack(system_id, component_id, msg, aa241x_grid_combined->mission_time, aa241x_grid_combined->cell);
}

/**
 * @brief Encode a aa241x_grid_combined struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param aa241x_grid_combined C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_aa241x_grid_combined_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_aa241x_grid_combined_t* aa241x_grid_combined)
{
    return mavlink_msg_aa241x_grid_combined_pack_chan(system_id, component_id, chan, msg, aa241x_grid_combined->mission_time, aa241x_grid_combined->cell);
}

/**
 * @brief Send a aa241x_grid_combined message
 * @param chan MAVLink channel to send the message
 *
 * @param mission_time The time this grid was sent
 * @param cell compact version of cells info in bounds
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_aa241x_grid_combined_send(mavlink_channel_t chan, uint64_t mission_time, const uint32_t *cell)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AA241X_GRID_COMBINED_LEN];
    _mav_put_uint64_t(buf, 0, mission_time);
    _mav_put_uint32_t_array(buf, 8, cell, 12);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AA241X_GRID_COMBINED, buf, MAVLINK_MSG_ID_AA241X_GRID_COMBINED_MIN_LEN, MAVLINK_MSG_ID_AA241X_GRID_COMBINED_LEN, MAVLINK_MSG_ID_AA241X_GRID_COMBINED_CRC);
#else
    mavlink_aa241x_grid_combined_t packet;
    packet.mission_time = mission_time;
    mav_array_memcpy(packet.cell, cell, sizeof(uint32_t)*12);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AA241X_GRID_COMBINED, (const char *)&packet, MAVLINK_MSG_ID_AA241X_GRID_COMBINED_MIN_LEN, MAVLINK_MSG_ID_AA241X_GRID_COMBINED_LEN, MAVLINK_MSG_ID_AA241X_GRID_COMBINED_CRC);
#endif
}

/**
 * @brief Send a aa241x_grid_combined message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_aa241x_grid_combined_send_struct(mavlink_channel_t chan, const mavlink_aa241x_grid_combined_t* aa241x_grid_combined)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_aa241x_grid_combined_send(chan, aa241x_grid_combined->mission_time, aa241x_grid_combined->cell);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AA241X_GRID_COMBINED, (const char *)aa241x_grid_combined, MAVLINK_MSG_ID_AA241X_GRID_COMBINED_MIN_LEN, MAVLINK_MSG_ID_AA241X_GRID_COMBINED_LEN, MAVLINK_MSG_ID_AA241X_GRID_COMBINED_CRC);
#endif
}

#if MAVLINK_MSG_ID_AA241X_GRID_COMBINED_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_aa241x_grid_combined_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t mission_time, const uint32_t *cell)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, mission_time);
    _mav_put_uint32_t_array(buf, 8, cell, 12);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AA241X_GRID_COMBINED, buf, MAVLINK_MSG_ID_AA241X_GRID_COMBINED_MIN_LEN, MAVLINK_MSG_ID_AA241X_GRID_COMBINED_LEN, MAVLINK_MSG_ID_AA241X_GRID_COMBINED_CRC);
#else
    mavlink_aa241x_grid_combined_t *packet = (mavlink_aa241x_grid_combined_t *)msgbuf;
    packet->mission_time = mission_time;
    mav_array_memcpy(packet->cell, cell, sizeof(uint32_t)*12);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AA241X_GRID_COMBINED, (const char *)packet, MAVLINK_MSG_ID_AA241X_GRID_COMBINED_MIN_LEN, MAVLINK_MSG_ID_AA241X_GRID_COMBINED_LEN, MAVLINK_MSG_ID_AA241X_GRID_COMBINED_CRC);
#endif
}
#endif

#endif

// MESSAGE AA241X_GRID_COMBINED UNPACKING


/**
 * @brief Get field mission_time from aa241x_grid_combined message
 *
 * @return The time this grid was sent
 */
static inline uint64_t mavlink_msg_aa241x_grid_combined_get_mission_time(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field cell from aa241x_grid_combined message
 *
 * @return compact version of cells info in bounds
 */
static inline uint16_t mavlink_msg_aa241x_grid_combined_get_cell(const mavlink_message_t* msg, uint32_t *cell)
{
    return _MAV_RETURN_uint32_t_array(msg, cell, 12,  8);
}

/**
 * @brief Decode a aa241x_grid_combined message into a struct
 *
 * @param msg The message to decode
 * @param aa241x_grid_combined C-struct to decode the message contents into
 */
static inline void mavlink_msg_aa241x_grid_combined_decode(const mavlink_message_t* msg, mavlink_aa241x_grid_combined_t* aa241x_grid_combined)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    aa241x_grid_combined->mission_time = mavlink_msg_aa241x_grid_combined_get_mission_time(msg);
    mavlink_msg_aa241x_grid_combined_get_cell(msg, aa241x_grid_combined->cell);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_AA241X_GRID_COMBINED_LEN? msg->len : MAVLINK_MSG_ID_AA241X_GRID_COMBINED_LEN;
        memset(aa241x_grid_combined, 0, MAVLINK_MSG_ID_AA241X_GRID_COMBINED_LEN);
    memcpy(aa241x_grid_combined, _MAV_PAYLOAD(msg), len);
#endif
}

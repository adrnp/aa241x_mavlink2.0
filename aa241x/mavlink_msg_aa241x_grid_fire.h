#pragma once
// MESSAGE AA241X_GRID_FIRE PACKING

#define MAVLINK_MSG_ID_AA241X_GRID_FIRE 157

MAVPACKED(
typedef struct __mavlink_aa241x_grid_fire_t {
 uint64_t mission_time; /*< The time this grid was sent*/
 uint16_t fire_cells[16]; /*< compact version of cells on fire*/
}) mavlink_aa241x_grid_fire_t;

#define MAVLINK_MSG_ID_AA241X_GRID_FIRE_LEN 40
#define MAVLINK_MSG_ID_AA241X_GRID_FIRE_MIN_LEN 40
#define MAVLINK_MSG_ID_157_LEN 40
#define MAVLINK_MSG_ID_157_MIN_LEN 40

#define MAVLINK_MSG_ID_AA241X_GRID_FIRE_CRC 159
#define MAVLINK_MSG_ID_157_CRC 159

#define MAVLINK_MSG_AA241X_GRID_FIRE_FIELD_FIRE_CELLS_LEN 16

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_AA241X_GRID_FIRE { \
    157, \
    "AA241X_GRID_FIRE", \
    2, \
    {  { "mission_time", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_aa241x_grid_fire_t, mission_time) }, \
         { "fire_cells", NULL, MAVLINK_TYPE_UINT16_T, 16, 8, offsetof(mavlink_aa241x_grid_fire_t, fire_cells) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_AA241X_GRID_FIRE { \
    "AA241X_GRID_FIRE", \
    2, \
    {  { "mission_time", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_aa241x_grid_fire_t, mission_time) }, \
         { "fire_cells", NULL, MAVLINK_TYPE_UINT16_T, 16, 8, offsetof(mavlink_aa241x_grid_fire_t, fire_cells) }, \
         } \
}
#endif

/**
 * @brief Pack a aa241x_grid_fire message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param mission_time The time this grid was sent
 * @param fire_cells compact version of cells on fire
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_aa241x_grid_fire_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t mission_time, const uint16_t *fire_cells)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AA241X_GRID_FIRE_LEN];
    _mav_put_uint64_t(buf, 0, mission_time);
    _mav_put_uint16_t_array(buf, 8, fire_cells, 16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AA241X_GRID_FIRE_LEN);
#else
    mavlink_aa241x_grid_fire_t packet;
    packet.mission_time = mission_time;
    mav_array_memcpy(packet.fire_cells, fire_cells, sizeof(uint16_t)*16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AA241X_GRID_FIRE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AA241X_GRID_FIRE;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_AA241X_GRID_FIRE_MIN_LEN, MAVLINK_MSG_ID_AA241X_GRID_FIRE_LEN, MAVLINK_MSG_ID_AA241X_GRID_FIRE_CRC);
}

/**
 * @brief Pack a aa241x_grid_fire message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param mission_time The time this grid was sent
 * @param fire_cells compact version of cells on fire
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_aa241x_grid_fire_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t mission_time,const uint16_t *fire_cells)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AA241X_GRID_FIRE_LEN];
    _mav_put_uint64_t(buf, 0, mission_time);
    _mav_put_uint16_t_array(buf, 8, fire_cells, 16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AA241X_GRID_FIRE_LEN);
#else
    mavlink_aa241x_grid_fire_t packet;
    packet.mission_time = mission_time;
    mav_array_memcpy(packet.fire_cells, fire_cells, sizeof(uint16_t)*16);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AA241X_GRID_FIRE_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AA241X_GRID_FIRE;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_AA241X_GRID_FIRE_MIN_LEN, MAVLINK_MSG_ID_AA241X_GRID_FIRE_LEN, MAVLINK_MSG_ID_AA241X_GRID_FIRE_CRC);
}

/**
 * @brief Encode a aa241x_grid_fire struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param aa241x_grid_fire C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_aa241x_grid_fire_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_aa241x_grid_fire_t* aa241x_grid_fire)
{
    return mavlink_msg_aa241x_grid_fire_pack(system_id, component_id, msg, aa241x_grid_fire->mission_time, aa241x_grid_fire->fire_cells);
}

/**
 * @brief Encode a aa241x_grid_fire struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param aa241x_grid_fire C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_aa241x_grid_fire_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_aa241x_grid_fire_t* aa241x_grid_fire)
{
    return mavlink_msg_aa241x_grid_fire_pack_chan(system_id, component_id, chan, msg, aa241x_grid_fire->mission_time, aa241x_grid_fire->fire_cells);
}

/**
 * @brief Send a aa241x_grid_fire message
 * @param chan MAVLink channel to send the message
 *
 * @param mission_time The time this grid was sent
 * @param fire_cells compact version of cells on fire
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_aa241x_grid_fire_send(mavlink_channel_t chan, uint64_t mission_time, const uint16_t *fire_cells)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AA241X_GRID_FIRE_LEN];
    _mav_put_uint64_t(buf, 0, mission_time);
    _mav_put_uint16_t_array(buf, 8, fire_cells, 16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AA241X_GRID_FIRE, buf, MAVLINK_MSG_ID_AA241X_GRID_FIRE_MIN_LEN, MAVLINK_MSG_ID_AA241X_GRID_FIRE_LEN, MAVLINK_MSG_ID_AA241X_GRID_FIRE_CRC);
#else
    mavlink_aa241x_grid_fire_t packet;
    packet.mission_time = mission_time;
    mav_array_memcpy(packet.fire_cells, fire_cells, sizeof(uint16_t)*16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AA241X_GRID_FIRE, (const char *)&packet, MAVLINK_MSG_ID_AA241X_GRID_FIRE_MIN_LEN, MAVLINK_MSG_ID_AA241X_GRID_FIRE_LEN, MAVLINK_MSG_ID_AA241X_GRID_FIRE_CRC);
#endif
}

/**
 * @brief Send a aa241x_grid_fire message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_aa241x_grid_fire_send_struct(mavlink_channel_t chan, const mavlink_aa241x_grid_fire_t* aa241x_grid_fire)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_aa241x_grid_fire_send(chan, aa241x_grid_fire->mission_time, aa241x_grid_fire->fire_cells);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AA241X_GRID_FIRE, (const char *)aa241x_grid_fire, MAVLINK_MSG_ID_AA241X_GRID_FIRE_MIN_LEN, MAVLINK_MSG_ID_AA241X_GRID_FIRE_LEN, MAVLINK_MSG_ID_AA241X_GRID_FIRE_CRC);
#endif
}

#if MAVLINK_MSG_ID_AA241X_GRID_FIRE_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_aa241x_grid_fire_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t mission_time, const uint16_t *fire_cells)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, mission_time);
    _mav_put_uint16_t_array(buf, 8, fire_cells, 16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AA241X_GRID_FIRE, buf, MAVLINK_MSG_ID_AA241X_GRID_FIRE_MIN_LEN, MAVLINK_MSG_ID_AA241X_GRID_FIRE_LEN, MAVLINK_MSG_ID_AA241X_GRID_FIRE_CRC);
#else
    mavlink_aa241x_grid_fire_t *packet = (mavlink_aa241x_grid_fire_t *)msgbuf;
    packet->mission_time = mission_time;
    mav_array_memcpy(packet->fire_cells, fire_cells, sizeof(uint16_t)*16);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AA241X_GRID_FIRE, (const char *)packet, MAVLINK_MSG_ID_AA241X_GRID_FIRE_MIN_LEN, MAVLINK_MSG_ID_AA241X_GRID_FIRE_LEN, MAVLINK_MSG_ID_AA241X_GRID_FIRE_CRC);
#endif
}
#endif

#endif

// MESSAGE AA241X_GRID_FIRE UNPACKING


/**
 * @brief Get field mission_time from aa241x_grid_fire message
 *
 * @return The time this grid was sent
 */
static inline uint64_t mavlink_msg_aa241x_grid_fire_get_mission_time(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field fire_cells from aa241x_grid_fire message
 *
 * @return compact version of cells on fire
 */
static inline uint16_t mavlink_msg_aa241x_grid_fire_get_fire_cells(const mavlink_message_t* msg, uint16_t *fire_cells)
{
    return _MAV_RETURN_uint16_t_array(msg, fire_cells, 16,  8);
}

/**
 * @brief Decode a aa241x_grid_fire message into a struct
 *
 * @param msg The message to decode
 * @param aa241x_grid_fire C-struct to decode the message contents into
 */
static inline void mavlink_msg_aa241x_grid_fire_decode(const mavlink_message_t* msg, mavlink_aa241x_grid_fire_t* aa241x_grid_fire)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    aa241x_grid_fire->mission_time = mavlink_msg_aa241x_grid_fire_get_mission_time(msg);
    mavlink_msg_aa241x_grid_fire_get_fire_cells(msg, aa241x_grid_fire->fire_cells);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_AA241X_GRID_FIRE_LEN? msg->len : MAVLINK_MSG_ID_AA241X_GRID_FIRE_LEN;
        memset(aa241x_grid_fire, 0, MAVLINK_MSG_ID_AA241X_GRID_FIRE_LEN);
    memcpy(aa241x_grid_fire, _MAV_PAYLOAD(msg), len);
#endif
}

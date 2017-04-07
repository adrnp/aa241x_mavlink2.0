#pragma once
// MESSAGE AA241X_AUX_DATA PACKING

#define MAVLINK_MSG_ID_AA241X_AUX_DATA 162

MAVPACKED(
typedef struct __mavlink_aa241x_aux_data_t {
 uint64_t timestamp; /*< The time the data was sent*/
 float N; /*< FNorth position im [m]*/
 float E; /*< East position in [m]*/
 float D_baro; /*< Down baro position in [m]*/
 float D_gps; /*< Down gps position in [m]*/
 float body_u; /*< Body u velocity in [m/s]*/
 float body_v; /*< Body v velocity in [m/s]*/
 float body_w; /*< Body w velocity in [m/s]*/
 float ground_speed; /*< Ground speed in [m/s]*/
}) mavlink_aa241x_aux_data_t;

#define MAVLINK_MSG_ID_AA241X_AUX_DATA_LEN 40
#define MAVLINK_MSG_ID_AA241X_AUX_DATA_MIN_LEN 40
#define MAVLINK_MSG_ID_162_LEN 40
#define MAVLINK_MSG_ID_162_MIN_LEN 40

#define MAVLINK_MSG_ID_AA241X_AUX_DATA_CRC 88
#define MAVLINK_MSG_ID_162_CRC 88



#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_AA241X_AUX_DATA { \
    162, \
    "AA241X_AUX_DATA", \
    9, \
    {  { "timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_aa241x_aux_data_t, timestamp) }, \
         { "N", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_aa241x_aux_data_t, N) }, \
         { "E", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_aa241x_aux_data_t, E) }, \
         { "D_baro", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_aa241x_aux_data_t, D_baro) }, \
         { "D_gps", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_aa241x_aux_data_t, D_gps) }, \
         { "body_u", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_aa241x_aux_data_t, body_u) }, \
         { "body_v", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_aa241x_aux_data_t, body_v) }, \
         { "body_w", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_aa241x_aux_data_t, body_w) }, \
         { "ground_speed", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_aa241x_aux_data_t, ground_speed) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_AA241X_AUX_DATA { \
    "AA241X_AUX_DATA", \
    9, \
    {  { "timestamp", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_aa241x_aux_data_t, timestamp) }, \
         { "N", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_aa241x_aux_data_t, N) }, \
         { "E", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_aa241x_aux_data_t, E) }, \
         { "D_baro", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_aa241x_aux_data_t, D_baro) }, \
         { "D_gps", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_aa241x_aux_data_t, D_gps) }, \
         { "body_u", NULL, MAVLINK_TYPE_FLOAT, 0, 24, offsetof(mavlink_aa241x_aux_data_t, body_u) }, \
         { "body_v", NULL, MAVLINK_TYPE_FLOAT, 0, 28, offsetof(mavlink_aa241x_aux_data_t, body_v) }, \
         { "body_w", NULL, MAVLINK_TYPE_FLOAT, 0, 32, offsetof(mavlink_aa241x_aux_data_t, body_w) }, \
         { "ground_speed", NULL, MAVLINK_TYPE_FLOAT, 0, 36, offsetof(mavlink_aa241x_aux_data_t, ground_speed) }, \
         } \
}
#endif

/**
 * @brief Pack a aa241x_aux_data message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param timestamp The time the data was sent
 * @param N FNorth position im [m]
 * @param E East position in [m]
 * @param D_baro Down baro position in [m]
 * @param D_gps Down gps position in [m]
 * @param body_u Body u velocity in [m/s]
 * @param body_v Body v velocity in [m/s]
 * @param body_w Body w velocity in [m/s]
 * @param ground_speed Ground speed in [m/s]
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_aa241x_aux_data_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t timestamp, float N, float E, float D_baro, float D_gps, float body_u, float body_v, float body_w, float ground_speed)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AA241X_AUX_DATA_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_float(buf, 8, N);
    _mav_put_float(buf, 12, E);
    _mav_put_float(buf, 16, D_baro);
    _mav_put_float(buf, 20, D_gps);
    _mav_put_float(buf, 24, body_u);
    _mav_put_float(buf, 28, body_v);
    _mav_put_float(buf, 32, body_w);
    _mav_put_float(buf, 36, ground_speed);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AA241X_AUX_DATA_LEN);
#else
    mavlink_aa241x_aux_data_t packet;
    packet.timestamp = timestamp;
    packet.N = N;
    packet.E = E;
    packet.D_baro = D_baro;
    packet.D_gps = D_gps;
    packet.body_u = body_u;
    packet.body_v = body_v;
    packet.body_w = body_w;
    packet.ground_speed = ground_speed;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AA241X_AUX_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AA241X_AUX_DATA;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_AA241X_AUX_DATA_MIN_LEN, MAVLINK_MSG_ID_AA241X_AUX_DATA_LEN, MAVLINK_MSG_ID_AA241X_AUX_DATA_CRC);
}

/**
 * @brief Pack a aa241x_aux_data message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param timestamp The time the data was sent
 * @param N FNorth position im [m]
 * @param E East position in [m]
 * @param D_baro Down baro position in [m]
 * @param D_gps Down gps position in [m]
 * @param body_u Body u velocity in [m/s]
 * @param body_v Body v velocity in [m/s]
 * @param body_w Body w velocity in [m/s]
 * @param ground_speed Ground speed in [m/s]
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_aa241x_aux_data_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t timestamp,float N,float E,float D_baro,float D_gps,float body_u,float body_v,float body_w,float ground_speed)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AA241X_AUX_DATA_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_float(buf, 8, N);
    _mav_put_float(buf, 12, E);
    _mav_put_float(buf, 16, D_baro);
    _mav_put_float(buf, 20, D_gps);
    _mav_put_float(buf, 24, body_u);
    _mav_put_float(buf, 28, body_v);
    _mav_put_float(buf, 32, body_w);
    _mav_put_float(buf, 36, ground_speed);

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AA241X_AUX_DATA_LEN);
#else
    mavlink_aa241x_aux_data_t packet;
    packet.timestamp = timestamp;
    packet.N = N;
    packet.E = E;
    packet.D_baro = D_baro;
    packet.D_gps = D_gps;
    packet.body_u = body_u;
    packet.body_v = body_v;
    packet.body_w = body_w;
    packet.ground_speed = ground_speed;

        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AA241X_AUX_DATA_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AA241X_AUX_DATA;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_AA241X_AUX_DATA_MIN_LEN, MAVLINK_MSG_ID_AA241X_AUX_DATA_LEN, MAVLINK_MSG_ID_AA241X_AUX_DATA_CRC);
}

/**
 * @brief Encode a aa241x_aux_data struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param aa241x_aux_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_aa241x_aux_data_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_aa241x_aux_data_t* aa241x_aux_data)
{
    return mavlink_msg_aa241x_aux_data_pack(system_id, component_id, msg, aa241x_aux_data->timestamp, aa241x_aux_data->N, aa241x_aux_data->E, aa241x_aux_data->D_baro, aa241x_aux_data->D_gps, aa241x_aux_data->body_u, aa241x_aux_data->body_v, aa241x_aux_data->body_w, aa241x_aux_data->ground_speed);
}

/**
 * @brief Encode a aa241x_aux_data struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param aa241x_aux_data C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_aa241x_aux_data_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_aa241x_aux_data_t* aa241x_aux_data)
{
    return mavlink_msg_aa241x_aux_data_pack_chan(system_id, component_id, chan, msg, aa241x_aux_data->timestamp, aa241x_aux_data->N, aa241x_aux_data->E, aa241x_aux_data->D_baro, aa241x_aux_data->D_gps, aa241x_aux_data->body_u, aa241x_aux_data->body_v, aa241x_aux_data->body_w, aa241x_aux_data->ground_speed);
}

/**
 * @brief Send a aa241x_aux_data message
 * @param chan MAVLink channel to send the message
 *
 * @param timestamp The time the data was sent
 * @param N FNorth position im [m]
 * @param E East position in [m]
 * @param D_baro Down baro position in [m]
 * @param D_gps Down gps position in [m]
 * @param body_u Body u velocity in [m/s]
 * @param body_v Body v velocity in [m/s]
 * @param body_w Body w velocity in [m/s]
 * @param ground_speed Ground speed in [m/s]
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_aa241x_aux_data_send(mavlink_channel_t chan, uint64_t timestamp, float N, float E, float D_baro, float D_gps, float body_u, float body_v, float body_w, float ground_speed)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AA241X_AUX_DATA_LEN];
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_float(buf, 8, N);
    _mav_put_float(buf, 12, E);
    _mav_put_float(buf, 16, D_baro);
    _mav_put_float(buf, 20, D_gps);
    _mav_put_float(buf, 24, body_u);
    _mav_put_float(buf, 28, body_v);
    _mav_put_float(buf, 32, body_w);
    _mav_put_float(buf, 36, ground_speed);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AA241X_AUX_DATA, buf, MAVLINK_MSG_ID_AA241X_AUX_DATA_MIN_LEN, MAVLINK_MSG_ID_AA241X_AUX_DATA_LEN, MAVLINK_MSG_ID_AA241X_AUX_DATA_CRC);
#else
    mavlink_aa241x_aux_data_t packet;
    packet.timestamp = timestamp;
    packet.N = N;
    packet.E = E;
    packet.D_baro = D_baro;
    packet.D_gps = D_gps;
    packet.body_u = body_u;
    packet.body_v = body_v;
    packet.body_w = body_w;
    packet.ground_speed = ground_speed;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AA241X_AUX_DATA, (const char *)&packet, MAVLINK_MSG_ID_AA241X_AUX_DATA_MIN_LEN, MAVLINK_MSG_ID_AA241X_AUX_DATA_LEN, MAVLINK_MSG_ID_AA241X_AUX_DATA_CRC);
#endif
}

/**
 * @brief Send a aa241x_aux_data message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_aa241x_aux_data_send_struct(mavlink_channel_t chan, const mavlink_aa241x_aux_data_t* aa241x_aux_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_aa241x_aux_data_send(chan, aa241x_aux_data->timestamp, aa241x_aux_data->N, aa241x_aux_data->E, aa241x_aux_data->D_baro, aa241x_aux_data->D_gps, aa241x_aux_data->body_u, aa241x_aux_data->body_v, aa241x_aux_data->body_w, aa241x_aux_data->ground_speed);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AA241X_AUX_DATA, (const char *)aa241x_aux_data, MAVLINK_MSG_ID_AA241X_AUX_DATA_MIN_LEN, MAVLINK_MSG_ID_AA241X_AUX_DATA_LEN, MAVLINK_MSG_ID_AA241X_AUX_DATA_CRC);
#endif
}

#if MAVLINK_MSG_ID_AA241X_AUX_DATA_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_aa241x_aux_data_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t timestamp, float N, float E, float D_baro, float D_gps, float body_u, float body_v, float body_w, float ground_speed)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, timestamp);
    _mav_put_float(buf, 8, N);
    _mav_put_float(buf, 12, E);
    _mav_put_float(buf, 16, D_baro);
    _mav_put_float(buf, 20, D_gps);
    _mav_put_float(buf, 24, body_u);
    _mav_put_float(buf, 28, body_v);
    _mav_put_float(buf, 32, body_w);
    _mav_put_float(buf, 36, ground_speed);

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AA241X_AUX_DATA, buf, MAVLINK_MSG_ID_AA241X_AUX_DATA_MIN_LEN, MAVLINK_MSG_ID_AA241X_AUX_DATA_LEN, MAVLINK_MSG_ID_AA241X_AUX_DATA_CRC);
#else
    mavlink_aa241x_aux_data_t *packet = (mavlink_aa241x_aux_data_t *)msgbuf;
    packet->timestamp = timestamp;
    packet->N = N;
    packet->E = E;
    packet->D_baro = D_baro;
    packet->D_gps = D_gps;
    packet->body_u = body_u;
    packet->body_v = body_v;
    packet->body_w = body_w;
    packet->ground_speed = ground_speed;

    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AA241X_AUX_DATA, (const char *)packet, MAVLINK_MSG_ID_AA241X_AUX_DATA_MIN_LEN, MAVLINK_MSG_ID_AA241X_AUX_DATA_LEN, MAVLINK_MSG_ID_AA241X_AUX_DATA_CRC);
#endif
}
#endif

#endif

// MESSAGE AA241X_AUX_DATA UNPACKING


/**
 * @brief Get field timestamp from aa241x_aux_data message
 *
 * @return The time the data was sent
 */
static inline uint64_t mavlink_msg_aa241x_aux_data_get_timestamp(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field N from aa241x_aux_data message
 *
 * @return FNorth position im [m]
 */
static inline float mavlink_msg_aa241x_aux_data_get_N(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field E from aa241x_aux_data message
 *
 * @return East position in [m]
 */
static inline float mavlink_msg_aa241x_aux_data_get_E(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field D_baro from aa241x_aux_data message
 *
 * @return Down baro position in [m]
 */
static inline float mavlink_msg_aa241x_aux_data_get_D_baro(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field D_gps from aa241x_aux_data message
 *
 * @return Down gps position in [m]
 */
static inline float mavlink_msg_aa241x_aux_data_get_D_gps(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field body_u from aa241x_aux_data message
 *
 * @return Body u velocity in [m/s]
 */
static inline float mavlink_msg_aa241x_aux_data_get_body_u(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  24);
}

/**
 * @brief Get field body_v from aa241x_aux_data message
 *
 * @return Body v velocity in [m/s]
 */
static inline float mavlink_msg_aa241x_aux_data_get_body_v(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  28);
}

/**
 * @brief Get field body_w from aa241x_aux_data message
 *
 * @return Body w velocity in [m/s]
 */
static inline float mavlink_msg_aa241x_aux_data_get_body_w(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  32);
}

/**
 * @brief Get field ground_speed from aa241x_aux_data message
 *
 * @return Ground speed in [m/s]
 */
static inline float mavlink_msg_aa241x_aux_data_get_ground_speed(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  36);
}

/**
 * @brief Decode a aa241x_aux_data message into a struct
 *
 * @param msg The message to decode
 * @param aa241x_aux_data C-struct to decode the message contents into
 */
static inline void mavlink_msg_aa241x_aux_data_decode(const mavlink_message_t* msg, mavlink_aa241x_aux_data_t* aa241x_aux_data)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    aa241x_aux_data->timestamp = mavlink_msg_aa241x_aux_data_get_timestamp(msg);
    aa241x_aux_data->N = mavlink_msg_aa241x_aux_data_get_N(msg);
    aa241x_aux_data->E = mavlink_msg_aa241x_aux_data_get_E(msg);
    aa241x_aux_data->D_baro = mavlink_msg_aa241x_aux_data_get_D_baro(msg);
    aa241x_aux_data->D_gps = mavlink_msg_aa241x_aux_data_get_D_gps(msg);
    aa241x_aux_data->body_u = mavlink_msg_aa241x_aux_data_get_body_u(msg);
    aa241x_aux_data->body_v = mavlink_msg_aa241x_aux_data_get_body_v(msg);
    aa241x_aux_data->body_w = mavlink_msg_aa241x_aux_data_get_body_w(msg);
    aa241x_aux_data->ground_speed = mavlink_msg_aa241x_aux_data_get_ground_speed(msg);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_AA241X_AUX_DATA_LEN? msg->len : MAVLINK_MSG_ID_AA241X_AUX_DATA_LEN;
        memset(aa241x_aux_data, 0, MAVLINK_MSG_ID_AA241X_AUX_DATA_LEN);
    memcpy(aa241x_aux_data, _MAV_PAYLOAD(msg), len);
#endif
}

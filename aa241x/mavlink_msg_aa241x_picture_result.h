#pragma once
// MESSAGE AA241X_PICTURE_RESULT PACKING

#define MAVLINK_MSG_ID_AA241X_PICTURE_RESULT 156

MAVPACKED(
typedef struct __mavlink_aa241x_picture_result_t {
 uint64_t mission_time; /*< Mission time in microseconds at which the water was dropped*/
 float center_n; /*< North position of the center of the picture*/
 float center_e; /*< East position of the center of the picture*/
 float center_d; /*< Down position of the center of the picture*/
 float pic_d; /*< Diameter in [m] of the picture*/
 uint8_t success; /*< 1 if successfully taken, 0 otherwise*/
 uint8_t num_cells; /*< Number of cells in the picture*/
 uint8_t i[9]; /*< list of i grid coords of grid cells in view (i = 255 means unused array element)*/
 uint8_t j[9]; /*< list of j grid coords of grid cells in view (j = 255 means unused array element)*/
 int8_t state[9]; /*< list of states of the grid cells in cell (state = 3 means unused array element)*/
}) mavlink_aa241x_picture_result_t;

#define MAVLINK_MSG_ID_AA241X_PICTURE_RESULT_LEN 53
#define MAVLINK_MSG_ID_AA241X_PICTURE_RESULT_MIN_LEN 53
#define MAVLINK_MSG_ID_156_LEN 53
#define MAVLINK_MSG_ID_156_MIN_LEN 53

#define MAVLINK_MSG_ID_AA241X_PICTURE_RESULT_CRC 162
#define MAVLINK_MSG_ID_156_CRC 162

#define MAVLINK_MSG_AA241X_PICTURE_RESULT_FIELD_I_LEN 9
#define MAVLINK_MSG_AA241X_PICTURE_RESULT_FIELD_J_LEN 9
#define MAVLINK_MSG_AA241X_PICTURE_RESULT_FIELD_STATE_LEN 9

#if MAVLINK_COMMAND_24BIT
#define MAVLINK_MESSAGE_INFO_AA241X_PICTURE_RESULT { \
    156, \
    "AA241X_PICTURE_RESULT", \
    10, \
    {  { "mission_time", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_aa241x_picture_result_t, mission_time) }, \
         { "center_n", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_aa241x_picture_result_t, center_n) }, \
         { "center_e", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_aa241x_picture_result_t, center_e) }, \
         { "center_d", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_aa241x_picture_result_t, center_d) }, \
         { "pic_d", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_aa241x_picture_result_t, pic_d) }, \
         { "success", NULL, MAVLINK_TYPE_UINT8_T, 0, 24, offsetof(mavlink_aa241x_picture_result_t, success) }, \
         { "num_cells", NULL, MAVLINK_TYPE_UINT8_T, 0, 25, offsetof(mavlink_aa241x_picture_result_t, num_cells) }, \
         { "i", NULL, MAVLINK_TYPE_UINT8_T, 9, 26, offsetof(mavlink_aa241x_picture_result_t, i) }, \
         { "j", NULL, MAVLINK_TYPE_UINT8_T, 9, 35, offsetof(mavlink_aa241x_picture_result_t, j) }, \
         { "state", NULL, MAVLINK_TYPE_INT8_T, 9, 44, offsetof(mavlink_aa241x_picture_result_t, state) }, \
         } \
}
#else
#define MAVLINK_MESSAGE_INFO_AA241X_PICTURE_RESULT { \
    "AA241X_PICTURE_RESULT", \
    10, \
    {  { "mission_time", NULL, MAVLINK_TYPE_UINT64_T, 0, 0, offsetof(mavlink_aa241x_picture_result_t, mission_time) }, \
         { "center_n", NULL, MAVLINK_TYPE_FLOAT, 0, 8, offsetof(mavlink_aa241x_picture_result_t, center_n) }, \
         { "center_e", NULL, MAVLINK_TYPE_FLOAT, 0, 12, offsetof(mavlink_aa241x_picture_result_t, center_e) }, \
         { "center_d", NULL, MAVLINK_TYPE_FLOAT, 0, 16, offsetof(mavlink_aa241x_picture_result_t, center_d) }, \
         { "pic_d", NULL, MAVLINK_TYPE_FLOAT, 0, 20, offsetof(mavlink_aa241x_picture_result_t, pic_d) }, \
         { "success", NULL, MAVLINK_TYPE_UINT8_T, 0, 24, offsetof(mavlink_aa241x_picture_result_t, success) }, \
         { "num_cells", NULL, MAVLINK_TYPE_UINT8_T, 0, 25, offsetof(mavlink_aa241x_picture_result_t, num_cells) }, \
         { "i", NULL, MAVLINK_TYPE_UINT8_T, 9, 26, offsetof(mavlink_aa241x_picture_result_t, i) }, \
         { "j", NULL, MAVLINK_TYPE_UINT8_T, 9, 35, offsetof(mavlink_aa241x_picture_result_t, j) }, \
         { "state", NULL, MAVLINK_TYPE_INT8_T, 9, 44, offsetof(mavlink_aa241x_picture_result_t, state) }, \
         } \
}
#endif

/**
 * @brief Pack a aa241x_picture_result message
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 *
 * @param mission_time Mission time in microseconds at which the water was dropped
 * @param success 1 if successfully taken, 0 otherwise
 * @param center_n North position of the center of the picture
 * @param center_e East position of the center of the picture
 * @param center_d Down position of the center of the picture
 * @param pic_d Diameter in [m] of the picture
 * @param num_cells Number of cells in the picture
 * @param i list of i grid coords of grid cells in view (i = 255 means unused array element)
 * @param j list of j grid coords of grid cells in view (j = 255 means unused array element)
 * @param state list of states of the grid cells in cell (state = 3 means unused array element)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_aa241x_picture_result_pack(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg,
                               uint64_t mission_time, uint8_t success, float center_n, float center_e, float center_d, float pic_d, uint8_t num_cells, const uint8_t *i, const uint8_t *j, const int8_t *state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AA241X_PICTURE_RESULT_LEN];
    _mav_put_uint64_t(buf, 0, mission_time);
    _mav_put_float(buf, 8, center_n);
    _mav_put_float(buf, 12, center_e);
    _mav_put_float(buf, 16, center_d);
    _mav_put_float(buf, 20, pic_d);
    _mav_put_uint8_t(buf, 24, success);
    _mav_put_uint8_t(buf, 25, num_cells);
    _mav_put_uint8_t_array(buf, 26, i, 9);
    _mav_put_uint8_t_array(buf, 35, j, 9);
    _mav_put_int8_t_array(buf, 44, state, 9);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AA241X_PICTURE_RESULT_LEN);
#else
    mavlink_aa241x_picture_result_t packet;
    packet.mission_time = mission_time;
    packet.center_n = center_n;
    packet.center_e = center_e;
    packet.center_d = center_d;
    packet.pic_d = pic_d;
    packet.success = success;
    packet.num_cells = num_cells;
    mav_array_memcpy(packet.i, i, sizeof(uint8_t)*9);
    mav_array_memcpy(packet.j, j, sizeof(uint8_t)*9);
    mav_array_memcpy(packet.state, state, sizeof(int8_t)*9);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AA241X_PICTURE_RESULT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AA241X_PICTURE_RESULT;
    return mavlink_finalize_message(msg, system_id, component_id, MAVLINK_MSG_ID_AA241X_PICTURE_RESULT_MIN_LEN, MAVLINK_MSG_ID_AA241X_PICTURE_RESULT_LEN, MAVLINK_MSG_ID_AA241X_PICTURE_RESULT_CRC);
}

/**
 * @brief Pack a aa241x_picture_result message on a channel
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param mission_time Mission time in microseconds at which the water was dropped
 * @param success 1 if successfully taken, 0 otherwise
 * @param center_n North position of the center of the picture
 * @param center_e East position of the center of the picture
 * @param center_d Down position of the center of the picture
 * @param pic_d Diameter in [m] of the picture
 * @param num_cells Number of cells in the picture
 * @param i list of i grid coords of grid cells in view (i = 255 means unused array element)
 * @param j list of j grid coords of grid cells in view (j = 255 means unused array element)
 * @param state list of states of the grid cells in cell (state = 3 means unused array element)
 * @return length of the message in bytes (excluding serial stream start sign)
 */
static inline uint16_t mavlink_msg_aa241x_picture_result_pack_chan(uint8_t system_id, uint8_t component_id, uint8_t chan,
                               mavlink_message_t* msg,
                                   uint64_t mission_time,uint8_t success,float center_n,float center_e,float center_d,float pic_d,uint8_t num_cells,const uint8_t *i,const uint8_t *j,const int8_t *state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AA241X_PICTURE_RESULT_LEN];
    _mav_put_uint64_t(buf, 0, mission_time);
    _mav_put_float(buf, 8, center_n);
    _mav_put_float(buf, 12, center_e);
    _mav_put_float(buf, 16, center_d);
    _mav_put_float(buf, 20, pic_d);
    _mav_put_uint8_t(buf, 24, success);
    _mav_put_uint8_t(buf, 25, num_cells);
    _mav_put_uint8_t_array(buf, 26, i, 9);
    _mav_put_uint8_t_array(buf, 35, j, 9);
    _mav_put_int8_t_array(buf, 44, state, 9);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), buf, MAVLINK_MSG_ID_AA241X_PICTURE_RESULT_LEN);
#else
    mavlink_aa241x_picture_result_t packet;
    packet.mission_time = mission_time;
    packet.center_n = center_n;
    packet.center_e = center_e;
    packet.center_d = center_d;
    packet.pic_d = pic_d;
    packet.success = success;
    packet.num_cells = num_cells;
    mav_array_memcpy(packet.i, i, sizeof(uint8_t)*9);
    mav_array_memcpy(packet.j, j, sizeof(uint8_t)*9);
    mav_array_memcpy(packet.state, state, sizeof(int8_t)*9);
        memcpy(_MAV_PAYLOAD_NON_CONST(msg), &packet, MAVLINK_MSG_ID_AA241X_PICTURE_RESULT_LEN);
#endif

    msg->msgid = MAVLINK_MSG_ID_AA241X_PICTURE_RESULT;
    return mavlink_finalize_message_chan(msg, system_id, component_id, chan, MAVLINK_MSG_ID_AA241X_PICTURE_RESULT_MIN_LEN, MAVLINK_MSG_ID_AA241X_PICTURE_RESULT_LEN, MAVLINK_MSG_ID_AA241X_PICTURE_RESULT_CRC);
}

/**
 * @brief Encode a aa241x_picture_result struct
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param msg The MAVLink message to compress the data into
 * @param aa241x_picture_result C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_aa241x_picture_result_encode(uint8_t system_id, uint8_t component_id, mavlink_message_t* msg, const mavlink_aa241x_picture_result_t* aa241x_picture_result)
{
    return mavlink_msg_aa241x_picture_result_pack(system_id, component_id, msg, aa241x_picture_result->mission_time, aa241x_picture_result->success, aa241x_picture_result->center_n, aa241x_picture_result->center_e, aa241x_picture_result->center_d, aa241x_picture_result->pic_d, aa241x_picture_result->num_cells, aa241x_picture_result->i, aa241x_picture_result->j, aa241x_picture_result->state);
}

/**
 * @brief Encode a aa241x_picture_result struct on a channel
 *
 * @param system_id ID of this system
 * @param component_id ID of this component (e.g. 200 for IMU)
 * @param chan The MAVLink channel this message will be sent over
 * @param msg The MAVLink message to compress the data into
 * @param aa241x_picture_result C-struct to read the message contents from
 */
static inline uint16_t mavlink_msg_aa241x_picture_result_encode_chan(uint8_t system_id, uint8_t component_id, uint8_t chan, mavlink_message_t* msg, const mavlink_aa241x_picture_result_t* aa241x_picture_result)
{
    return mavlink_msg_aa241x_picture_result_pack_chan(system_id, component_id, chan, msg, aa241x_picture_result->mission_time, aa241x_picture_result->success, aa241x_picture_result->center_n, aa241x_picture_result->center_e, aa241x_picture_result->center_d, aa241x_picture_result->pic_d, aa241x_picture_result->num_cells, aa241x_picture_result->i, aa241x_picture_result->j, aa241x_picture_result->state);
}

/**
 * @brief Send a aa241x_picture_result message
 * @param chan MAVLink channel to send the message
 *
 * @param mission_time Mission time in microseconds at which the water was dropped
 * @param success 1 if successfully taken, 0 otherwise
 * @param center_n North position of the center of the picture
 * @param center_e East position of the center of the picture
 * @param center_d Down position of the center of the picture
 * @param pic_d Diameter in [m] of the picture
 * @param num_cells Number of cells in the picture
 * @param i list of i grid coords of grid cells in view (i = 255 means unused array element)
 * @param j list of j grid coords of grid cells in view (j = 255 means unused array element)
 * @param state list of states of the grid cells in cell (state = 3 means unused array element)
 */
#ifdef MAVLINK_USE_CONVENIENCE_FUNCTIONS

static inline void mavlink_msg_aa241x_picture_result_send(mavlink_channel_t chan, uint64_t mission_time, uint8_t success, float center_n, float center_e, float center_d, float pic_d, uint8_t num_cells, const uint8_t *i, const uint8_t *j, const int8_t *state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char buf[MAVLINK_MSG_ID_AA241X_PICTURE_RESULT_LEN];
    _mav_put_uint64_t(buf, 0, mission_time);
    _mav_put_float(buf, 8, center_n);
    _mav_put_float(buf, 12, center_e);
    _mav_put_float(buf, 16, center_d);
    _mav_put_float(buf, 20, pic_d);
    _mav_put_uint8_t(buf, 24, success);
    _mav_put_uint8_t(buf, 25, num_cells);
    _mav_put_uint8_t_array(buf, 26, i, 9);
    _mav_put_uint8_t_array(buf, 35, j, 9);
    _mav_put_int8_t_array(buf, 44, state, 9);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AA241X_PICTURE_RESULT, buf, MAVLINK_MSG_ID_AA241X_PICTURE_RESULT_MIN_LEN, MAVLINK_MSG_ID_AA241X_PICTURE_RESULT_LEN, MAVLINK_MSG_ID_AA241X_PICTURE_RESULT_CRC);
#else
    mavlink_aa241x_picture_result_t packet;
    packet.mission_time = mission_time;
    packet.center_n = center_n;
    packet.center_e = center_e;
    packet.center_d = center_d;
    packet.pic_d = pic_d;
    packet.success = success;
    packet.num_cells = num_cells;
    mav_array_memcpy(packet.i, i, sizeof(uint8_t)*9);
    mav_array_memcpy(packet.j, j, sizeof(uint8_t)*9);
    mav_array_memcpy(packet.state, state, sizeof(int8_t)*9);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AA241X_PICTURE_RESULT, (const char *)&packet, MAVLINK_MSG_ID_AA241X_PICTURE_RESULT_MIN_LEN, MAVLINK_MSG_ID_AA241X_PICTURE_RESULT_LEN, MAVLINK_MSG_ID_AA241X_PICTURE_RESULT_CRC);
#endif
}

/**
 * @brief Send a aa241x_picture_result message
 * @param chan MAVLink channel to send the message
 * @param struct The MAVLink struct to serialize
 */
static inline void mavlink_msg_aa241x_picture_result_send_struct(mavlink_channel_t chan, const mavlink_aa241x_picture_result_t* aa241x_picture_result)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    mavlink_msg_aa241x_picture_result_send(chan, aa241x_picture_result->mission_time, aa241x_picture_result->success, aa241x_picture_result->center_n, aa241x_picture_result->center_e, aa241x_picture_result->center_d, aa241x_picture_result->pic_d, aa241x_picture_result->num_cells, aa241x_picture_result->i, aa241x_picture_result->j, aa241x_picture_result->state);
#else
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AA241X_PICTURE_RESULT, (const char *)aa241x_picture_result, MAVLINK_MSG_ID_AA241X_PICTURE_RESULT_MIN_LEN, MAVLINK_MSG_ID_AA241X_PICTURE_RESULT_LEN, MAVLINK_MSG_ID_AA241X_PICTURE_RESULT_CRC);
#endif
}

#if MAVLINK_MSG_ID_AA241X_PICTURE_RESULT_LEN <= MAVLINK_MAX_PAYLOAD_LEN
/*
  This varient of _send() can be used to save stack space by re-using
  memory from the receive buffer.  The caller provides a
  mavlink_message_t which is the size of a full mavlink message. This
  is usually the receive buffer for the channel, and allows a reply to an
  incoming message with minimum stack space usage.
 */
static inline void mavlink_msg_aa241x_picture_result_send_buf(mavlink_message_t *msgbuf, mavlink_channel_t chan,  uint64_t mission_time, uint8_t success, float center_n, float center_e, float center_d, float pic_d, uint8_t num_cells, const uint8_t *i, const uint8_t *j, const int8_t *state)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    char *buf = (char *)msgbuf;
    _mav_put_uint64_t(buf, 0, mission_time);
    _mav_put_float(buf, 8, center_n);
    _mav_put_float(buf, 12, center_e);
    _mav_put_float(buf, 16, center_d);
    _mav_put_float(buf, 20, pic_d);
    _mav_put_uint8_t(buf, 24, success);
    _mav_put_uint8_t(buf, 25, num_cells);
    _mav_put_uint8_t_array(buf, 26, i, 9);
    _mav_put_uint8_t_array(buf, 35, j, 9);
    _mav_put_int8_t_array(buf, 44, state, 9);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AA241X_PICTURE_RESULT, buf, MAVLINK_MSG_ID_AA241X_PICTURE_RESULT_MIN_LEN, MAVLINK_MSG_ID_AA241X_PICTURE_RESULT_LEN, MAVLINK_MSG_ID_AA241X_PICTURE_RESULT_CRC);
#else
    mavlink_aa241x_picture_result_t *packet = (mavlink_aa241x_picture_result_t *)msgbuf;
    packet->mission_time = mission_time;
    packet->center_n = center_n;
    packet->center_e = center_e;
    packet->center_d = center_d;
    packet->pic_d = pic_d;
    packet->success = success;
    packet->num_cells = num_cells;
    mav_array_memcpy(packet->i, i, sizeof(uint8_t)*9);
    mav_array_memcpy(packet->j, j, sizeof(uint8_t)*9);
    mav_array_memcpy(packet->state, state, sizeof(int8_t)*9);
    _mav_finalize_message_chan_send(chan, MAVLINK_MSG_ID_AA241X_PICTURE_RESULT, (const char *)packet, MAVLINK_MSG_ID_AA241X_PICTURE_RESULT_MIN_LEN, MAVLINK_MSG_ID_AA241X_PICTURE_RESULT_LEN, MAVLINK_MSG_ID_AA241X_PICTURE_RESULT_CRC);
#endif
}
#endif

#endif

// MESSAGE AA241X_PICTURE_RESULT UNPACKING


/**
 * @brief Get field mission_time from aa241x_picture_result message
 *
 * @return Mission time in microseconds at which the water was dropped
 */
static inline uint64_t mavlink_msg_aa241x_picture_result_get_mission_time(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint64_t(msg,  0);
}

/**
 * @brief Get field success from aa241x_picture_result message
 *
 * @return 1 if successfully taken, 0 otherwise
 */
static inline uint8_t mavlink_msg_aa241x_picture_result_get_success(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  24);
}

/**
 * @brief Get field center_n from aa241x_picture_result message
 *
 * @return North position of the center of the picture
 */
static inline float mavlink_msg_aa241x_picture_result_get_center_n(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  8);
}

/**
 * @brief Get field center_e from aa241x_picture_result message
 *
 * @return East position of the center of the picture
 */
static inline float mavlink_msg_aa241x_picture_result_get_center_e(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  12);
}

/**
 * @brief Get field center_d from aa241x_picture_result message
 *
 * @return Down position of the center of the picture
 */
static inline float mavlink_msg_aa241x_picture_result_get_center_d(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  16);
}

/**
 * @brief Get field pic_d from aa241x_picture_result message
 *
 * @return Diameter in [m] of the picture
 */
static inline float mavlink_msg_aa241x_picture_result_get_pic_d(const mavlink_message_t* msg)
{
    return _MAV_RETURN_float(msg,  20);
}

/**
 * @brief Get field num_cells from aa241x_picture_result message
 *
 * @return Number of cells in the picture
 */
static inline uint8_t mavlink_msg_aa241x_picture_result_get_num_cells(const mavlink_message_t* msg)
{
    return _MAV_RETURN_uint8_t(msg,  25);
}

/**
 * @brief Get field i from aa241x_picture_result message
 *
 * @return list of i grid coords of grid cells in view (i = 255 means unused array element)
 */
static inline uint16_t mavlink_msg_aa241x_picture_result_get_i(const mavlink_message_t* msg, uint8_t *i)
{
    return _MAV_RETURN_uint8_t_array(msg, i, 9,  26);
}

/**
 * @brief Get field j from aa241x_picture_result message
 *
 * @return list of j grid coords of grid cells in view (j = 255 means unused array element)
 */
static inline uint16_t mavlink_msg_aa241x_picture_result_get_j(const mavlink_message_t* msg, uint8_t *j)
{
    return _MAV_RETURN_uint8_t_array(msg, j, 9,  35);
}

/**
 * @brief Get field state from aa241x_picture_result message
 *
 * @return list of states of the grid cells in cell (state = 3 means unused array element)
 */
static inline uint16_t mavlink_msg_aa241x_picture_result_get_state(const mavlink_message_t* msg, int8_t *state)
{
    return _MAV_RETURN_int8_t_array(msg, state, 9,  44);
}

/**
 * @brief Decode a aa241x_picture_result message into a struct
 *
 * @param msg The message to decode
 * @param aa241x_picture_result C-struct to decode the message contents into
 */
static inline void mavlink_msg_aa241x_picture_result_decode(const mavlink_message_t* msg, mavlink_aa241x_picture_result_t* aa241x_picture_result)
{
#if MAVLINK_NEED_BYTE_SWAP || !MAVLINK_ALIGNED_FIELDS
    aa241x_picture_result->mission_time = mavlink_msg_aa241x_picture_result_get_mission_time(msg);
    aa241x_picture_result->center_n = mavlink_msg_aa241x_picture_result_get_center_n(msg);
    aa241x_picture_result->center_e = mavlink_msg_aa241x_picture_result_get_center_e(msg);
    aa241x_picture_result->center_d = mavlink_msg_aa241x_picture_result_get_center_d(msg);
    aa241x_picture_result->pic_d = mavlink_msg_aa241x_picture_result_get_pic_d(msg);
    aa241x_picture_result->success = mavlink_msg_aa241x_picture_result_get_success(msg);
    aa241x_picture_result->num_cells = mavlink_msg_aa241x_picture_result_get_num_cells(msg);
    mavlink_msg_aa241x_picture_result_get_i(msg, aa241x_picture_result->i);
    mavlink_msg_aa241x_picture_result_get_j(msg, aa241x_picture_result->j);
    mavlink_msg_aa241x_picture_result_get_state(msg, aa241x_picture_result->state);
#else
        uint8_t len = msg->len < MAVLINK_MSG_ID_AA241X_PICTURE_RESULT_LEN? msg->len : MAVLINK_MSG_ID_AA241X_PICTURE_RESULT_LEN;
        memset(aa241x_picture_result, 0, MAVLINK_MSG_ID_AA241X_PICTURE_RESULT_LEN);
    memcpy(aa241x_picture_result, _MAV_PAYLOAD(msg), len);
#endif
}

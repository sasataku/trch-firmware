/*
 * Space Cubics OBC TRCH Software
 *  Definitions for i2c-gpio
 *
 * (C) Copyright 2021
 *         Space Cubics, LLC
 *
 */

int get_i2c (int m, int fpga_state);
void send_start (int m);
void send_stop (int m);
int i2c_send_data (int master, char data);
char i2c_receive_data (int master);

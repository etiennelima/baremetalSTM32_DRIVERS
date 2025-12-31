/*
 * uart.h
 *
 *  Created on: Dec 30, 2025
 *      Author: etienne.lima
 */

#ifndef UART_H_
#define UART_H_

void uart2_tx_init(void);
int __io_putchar(int ch);
void write_uart(int ch);

#endif /* UART_H_ */

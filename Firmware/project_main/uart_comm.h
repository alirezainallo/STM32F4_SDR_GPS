
/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __UART_COMM_H
#define __UART_COMM_H

/* Includes ------------------------------------------------------------------*/
#include <stdio.h>
#include <stdint.h>

/* Exported types ------------------------------------------------------------*/
/* Exported constants --------------------------------------------------------*/

/* Exported macro ------------------------------------------------------------*/
/* Exported functions ------------------------------------------------------- */

#define TxQueue_BUFFER_LEN         2048

void uart_init(void);
uint8_t uart_prim_dma_send_data(uint8_t* data, uint16_t size);
uint8_t uart_second_dma_send_data(uint8_t* data, uint16_t size);
uint8_t uart_prim_is_busy(void);
uint8_t uart_second_is_busy(void);

int uart_prim_printf(const char *format, ...);
int uart_second_printf(const char *format, ...);

#endif /* __UART_COMM_H */

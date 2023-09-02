
#define LCD1602_H
#define LED_PIN 0
#define LCD_ADDR 0x27		// Direccion del LCD
#define SLA_W LCD_ADDR << 1
#define LCD_COMMAND 0
#define LCD_DATA 1

// Inicializa LCD
void lcd1602_init(void);

// Limpia LCD
void lcd1602_clear(void);

// Setea posicion en pantalla (columna, fila)
void lcd1602_goto_xy(char col, char row);

// Muestra string en pantalla
void lcd1602_send_string(const char *str);

// Funciones auxiliares
void lcd1602_send_byte(char c, char rs);
void lcd1602_send_char(char c);
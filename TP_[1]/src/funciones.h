#ifndef FUNCIONES_H_
#define FUNCIONES_H_

/// @brief Muestra las opciones disponibles
///
/// @return devuelve la opcion seleccionada por el usuario
int menu();

/// @brief muestra varios saltos de linea para despejar la consola
///
void limpiarConsola();

/// @brief guarda los kilometros ingresados por el usuario
///
/// @param kilometros puntero a la variable kilometros
/// @param banderaKm puntero a la bandera de kilometros
void ingresarKilometros(int* kilometros, int* banderaKm);

/// @brief guarda los precios de los vuelos ingresados por el usuario
///
/// @param aerolineas puntero a la variable que guarda el precio de la empresa aerolineas
/// @param latam puntero a la variable que guarda el precio de la empresa latam
/// @param banderaPrecio puntero a la bandera del precio
void ingresarPrecioVuelos(float* aerolineas, float* latam, int* banderaPrecio);

/// @brief calcula el costo de los distintos medios de pago para la empresa aerolineas
///
/// @param precioAerolineas recibe el precio ingresado por el usuario
/// @param km recibe los km ingresados por el usuario
/// @param precioDebitoAerolineas puntero a la variable que guarda el precio con tarjeta de debito
/// @param precioCreditoAerolineas puntero a la variable que guarda el precio con tarjeta de credito
/// @param precioBtcAerolineas puntero a la variable que guarda el precio en btc
/// @param precioUnitarioAerolineas puntero a la variable que guarda el precio por km
/// @return devuelve 1 si la funcion fue llamada
int calcularCostosAerolineas(float precioAerolineas, int km, float* precioDebitoAerolineas, float* precioCreditoAerolineas, float* precioBtcAerolineas, float* precioUnitarioAerolineas);

/// @brief calcula el costo de los distintos medios de pago para la empresa latam
///
/// @param precioLatam recibe el precio ingresado por el usuario
/// @param km recibe los km ingresados por el usuario
/// @param precioDebitoLatam puntero a la variable que guarda el precio con tarjeta de debito
/// @param precioCreditoLatam puntero a la variable que guarda el precio con tarjeta de credito
/// @param precioBtcLatam puntero a la variable que guarda el precio en btc
/// @param precioUnitarioLatam puntero a la variable que guarda el precio por km
/// @return devuelve 1 si la funcion fue llamada
int calcularCostosLatam(float precioLatam, int km, float* precioDebitoLatam, float* precioCreditoLatam, float* precioBtcLatam, float* precioUnitarioLatam);

/// @brief calcula la diferencia de precio entre ambas empresas
///
/// @param precioAerolineas recibe el precio ingresado para la empresa aerolineas
/// @param precioLatam recibe el precio ingresado para la empresa latam
/// @param diferenciaPrecio puntero a la variable que almacena la diferencia de precio
void calcularDiferencia(float precioAerolineas, float precioLatam, float* diferenciaPrecio);

/// @brief imprime en pantalla los resultados de las operaciones para la empresa latam
///
/// @param precioDebitoLatam recibe el precio con tarjeta de debito para latam
/// @param precioCreditoLatam recibe el precio con tarjeta de credito para latam
/// @param precioBtcLatam recibe el precio en btc para latam
/// @param precioUnitarioLatam recibe el precio por km de latam
void informarResultadosLatam(float precioDebitoLatam, float precioCreditoLatam, float precioBtcLatam, float precioUnitarioLatam);

/// @brief imprime en pantalla los resultados de las operaciones para la empresa aerolineas
///
/// @param precioDebitoLatam recibe el precio con tarjeta de debito para aerolineas
/// @param precioCreditoLatam recibe el precio con tarjeta de credito para aerolineas
/// @param precioBtcLatam recibe el precio en btc para aerolineas
/// @param precioUnitarioLatam recibe el precio por km de aerolineas
void informarResultadosAerolineas(float precioDebitoAerolineas, float precioCreditoAerolineas, float precioBtcAerolineas, float precioUnitarioAerolineas);

/// @brief imprime en pantalla la diferencia de precio entre ambas empresas
///
/// @param diferenciaPrecio recibe la diferencia de precio calculada
void informarDiferencia(float diferenciaPrecio);

/// @brief Carga los numeros pedidos en el enunciado para testear el proyecto
///
/// @param kilometros puntero a kilometros
/// @param precioAerolineas puntero a precio de aerolineas
/// @param precioLatam puntero a precio de latam
void cargaForzada(int* kilometros, float *precioAerolineas, float* precioLatam);

/// @brief confirma si el usuario desea salir
///
/// @param salir puntero a la variable salir
void confirmarSalida(char* salir);

#endif /* FUNCIONES_H_ */

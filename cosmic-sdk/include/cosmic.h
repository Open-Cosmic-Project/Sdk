/**
 * @file cosmic.h
 * @brief Cabecera C oficial del SDK de CosmicOS (ABI versionada)
 */

#ifndef COSMIC_SDK_H
#define COSMIC_SDK_H

#ifdef __cplusplus
extern "C" {
#endif

#define COSMIC_ABI_VERSION "0.1.0"

/**
 * @brief Inicializa el contexto de la aplicación en el sistema CosmicOS.
 * @param app_id Identificador único de la app (ej. "org.cosmic.camera")
 * @return 0 en caso de éxito, código de error negativo en caso de fallo.
 */
int cosmic_init(const char* app_id);

/**
 * @brief Envía un mensaje de log redactable a clogd vía socket seguro Unix.
 */
int cosmic_log(int severity, const char* component, const char* message);

#ifdef __cplusplus
}
#endif

#endif /* COSMIC_SDK_H */

//! cosmic-sdk — Kit de desarrollo de software para CosmicOS
//!
//! Alcance acordado en CosmicOS spec secciones 7.1, 10.4 y 11.9:
//! - API para desarrollo de aplicaciones nativas en Rust y C/C++.
//! - Conectores con el sistema de logging seguro (clogd), notificaciones (cnotifd) y portales (cbrokerd).
//! - ABI versionada independiente compatible hacia atrás.

pub use cosmic_core::manifest::{AppClass, AppManifest};

pub fn init_app(app_id: &str) {
    println!("[cosmic-sdk] Inicializando runtime de app '{}' en CosmicOS", app_id);
}

pub fn log_event(severity: &str, component: &str, message: &str) {
    println!("[cosmic-sdk][{}:{}] {}", severity, component, message);
}

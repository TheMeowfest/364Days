#[derive(Debug, Default)]
pub struct RegStatus {
    coprocessor_usability: [bool; 4], //CU

    low_power: bool,

    additional_fp_regs: bool,

    reverse_endian: bool,

    diagnostic_status: DiagnosticStatus,

    interrupt_mask: InterruptMask,

    kernel_mode_64bit_addressing: bool,

    supervisor_mode_64bit_addressing: bool,

    user_mode_64bit_addressing: bool,

    mode: Mode,

    error_level: bool,

    exception_level: bool,

    interrupts_enabled: bool
}

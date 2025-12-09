#pragma once

// Windows.h defines ERROR as a macro, which conflicts with enum values
// Temporarily undefine it for the enum definitions
#ifdef _WIN32
#ifdef ERROR
#define QT_TOAST_HAD_ERROR_MACRO
#pragma push_macro("ERROR")
#undef ERROR
#endif
#endif

enum class ToastPreset
{
    SUCCESS,
    WARNING,
    ERROR,
    INFORMATION,
    SUCCESS_DARK,
    WARNING_DARK,
    ERROR_DARK,
    INFORMATION_DARK
};


enum class ToastIcon
{
    SUCCESS,
    WARNING,
    ERROR,
    INFORMATION,
    CLOSE
};

// Restore ERROR macro on Windows if it was defined
#ifdef _WIN32
#ifdef QT_TOAST_HAD_ERROR_MACRO
#pragma pop_macro("ERROR")
#undef QT_TOAST_HAD_ERROR_MACRO
#endif
#endif


enum class ToastPosition
{
    BOTTOM_LEFT,
    BOTTOM_MIDDLE,
    BOTTOM_RIGHT,
    TOP_LEFT,
    TOP_MIDDLE,
    TOP_RIGHT,
    CENTER
};


enum class ToastButtonAlignment
{
    TOP,
    MIDDLE,
    BOTTOM
};
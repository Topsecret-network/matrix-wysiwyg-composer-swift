// This file was autogenerated by some hot garbage in the `uniffi` crate.
// Trust me, you don't want to mess with it!

#pragma once

#include <stdbool.h>
#include <stdint.h>

// The following structs are used to implement the lowest level
// of the FFI, and thus useful to multiple uniffied crates.
// We ensure they are declared exactly once, with a header guard, UNIFFI_SHARED_H.
#ifdef UNIFFI_SHARED_H
    // We also try to prevent mixing versions of shared uniffi header structs.
    // If you add anything to the #else block, you must increment the version suffix in UNIFFI_SHARED_HEADER_V4
    #ifndef UNIFFI_SHARED_HEADER_V4
        #error Combining helper code from multiple versions of uniffi is not supported
    #endif // ndef UNIFFI_SHARED_HEADER_V4
#else
#define UNIFFI_SHARED_H
#define UNIFFI_SHARED_HEADER_V4
// ⚠️ Attention: If you change this #else block (ending in `#endif // def UNIFFI_SHARED_H`) you *must* ⚠️
// ⚠️ increment the version suffix in all instances of UNIFFI_SHARED_HEADER_V4 in this file.           ⚠️

typedef struct RustBuffer
{
    int32_t capacity;
    int32_t len;
    uint8_t *_Nullable data;
} RustBuffer;

typedef int32_t (*ForeignCallback)(uint64_t, int32_t, RustBuffer, RustBuffer *_Nonnull);

typedef struct ForeignBytes
{
    int32_t len;
    const uint8_t *_Nullable data;
} ForeignBytes;

// Error definitions
typedef struct RustCallStatus {
    int8_t code;
    RustBuffer errorBuf;
} RustCallStatus;

// ⚠️ Attention: If you change this #else block (ending in `#endif // def UNIFFI_SHARED_H`) you *must* ⚠️
// ⚠️ increment the version suffix in all instances of UNIFFI_SHARED_HEADER_V4 in this file.           ⚠️
#endif // def UNIFFI_SHARED_H

void ffi_wysiwyg_composer_83c1_ComposerModel_object_free(
      void*_Nonnull ptr,
    RustCallStatus *_Nonnull out_status
    );
void*_Nonnull wysiwyg_composer_83c1_ComposerModel_set_content_from_html(
      void*_Nonnull ptr,RustBuffer html,
    RustCallStatus *_Nonnull out_status
    );
void*_Nonnull wysiwyg_composer_83c1_ComposerModel_set_content_from_markdown(
      void*_Nonnull ptr,RustBuffer markdown,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer wysiwyg_composer_83c1_ComposerModel_get_content_as_html(
      void*_Nonnull ptr,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer wysiwyg_composer_83c1_ComposerModel_get_content_as_markdown(
      void*_Nonnull ptr,
    RustCallStatus *_Nonnull out_status
    );
void*_Nonnull wysiwyg_composer_83c1_ComposerModel_clear(
      void*_Nonnull ptr,
    RustCallStatus *_Nonnull out_status
    );
void*_Nonnull wysiwyg_composer_83c1_ComposerModel_select(
      void*_Nonnull ptr,uint32_t start_utf16_codeunit,uint32_t end_utf16_codeunit,
    RustCallStatus *_Nonnull out_status
    );
void*_Nonnull wysiwyg_composer_83c1_ComposerModel_replace_text(
      void*_Nonnull ptr,RustBuffer new_text,
    RustCallStatus *_Nonnull out_status
    );
void*_Nonnull wysiwyg_composer_83c1_ComposerModel_replace_text_in(
      void*_Nonnull ptr,RustBuffer new_text,uint32_t start,uint32_t end,
    RustCallStatus *_Nonnull out_status
    );
void*_Nonnull wysiwyg_composer_83c1_ComposerModel_backspace(
      void*_Nonnull ptr,
    RustCallStatus *_Nonnull out_status
    );
void*_Nonnull wysiwyg_composer_83c1_ComposerModel_delete(
      void*_Nonnull ptr,
    RustCallStatus *_Nonnull out_status
    );
void*_Nonnull wysiwyg_composer_83c1_ComposerModel_delete_in(
      void*_Nonnull ptr,uint32_t start,uint32_t end,
    RustCallStatus *_Nonnull out_status
    );
void*_Nonnull wysiwyg_composer_83c1_ComposerModel_enter(
      void*_Nonnull ptr,
    RustCallStatus *_Nonnull out_status
    );
void*_Nonnull wysiwyg_composer_83c1_ComposerModel_bold(
      void*_Nonnull ptr,
    RustCallStatus *_Nonnull out_status
    );
void*_Nonnull wysiwyg_composer_83c1_ComposerModel_italic(
      void*_Nonnull ptr,
    RustCallStatus *_Nonnull out_status
    );
void*_Nonnull wysiwyg_composer_83c1_ComposerModel_strike_through(
      void*_Nonnull ptr,
    RustCallStatus *_Nonnull out_status
    );
void*_Nonnull wysiwyg_composer_83c1_ComposerModel_underline(
      void*_Nonnull ptr,
    RustCallStatus *_Nonnull out_status
    );
void*_Nonnull wysiwyg_composer_83c1_ComposerModel_inline_code(
      void*_Nonnull ptr,
    RustCallStatus *_Nonnull out_status
    );
void*_Nonnull wysiwyg_composer_83c1_ComposerModel_ordered_list(
      void*_Nonnull ptr,
    RustCallStatus *_Nonnull out_status
    );
void*_Nonnull wysiwyg_composer_83c1_ComposerModel_unordered_list(
      void*_Nonnull ptr,
    RustCallStatus *_Nonnull out_status
    );
void*_Nonnull wysiwyg_composer_83c1_ComposerModel_undo(
      void*_Nonnull ptr,
    RustCallStatus *_Nonnull out_status
    );
void*_Nonnull wysiwyg_composer_83c1_ComposerModel_redo(
      void*_Nonnull ptr,
    RustCallStatus *_Nonnull out_status
    );
void*_Nonnull wysiwyg_composer_83c1_ComposerModel_indent(
      void*_Nonnull ptr,
    RustCallStatus *_Nonnull out_status
    );
void*_Nonnull wysiwyg_composer_83c1_ComposerModel_un_indent(
      void*_Nonnull ptr,
    RustCallStatus *_Nonnull out_status
    );
void*_Nonnull wysiwyg_composer_83c1_ComposerModel_set_link(
      void*_Nonnull ptr,RustBuffer link,
    RustCallStatus *_Nonnull out_status
    );
void*_Nonnull wysiwyg_composer_83c1_ComposerModel_set_link_with_text(
      void*_Nonnull ptr,RustBuffer link,RustBuffer text,
    RustCallStatus *_Nonnull out_status
    );
void*_Nonnull wysiwyg_composer_83c1_ComposerModel_remove_links(
      void*_Nonnull ptr,
    RustCallStatus *_Nonnull out_status
    );
void*_Nonnull wysiwyg_composer_83c1_ComposerModel_code_block(
      void*_Nonnull ptr,
    RustCallStatus *_Nonnull out_status
    );
void*_Nonnull wysiwyg_composer_83c1_ComposerModel_quote(
      void*_Nonnull ptr,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer wysiwyg_composer_83c1_ComposerModel_to_tree(
      void*_Nonnull ptr,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer wysiwyg_composer_83c1_ComposerModel_get_current_dom_state(
      void*_Nonnull ptr,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer wysiwyg_composer_83c1_ComposerModel_action_states(
      void*_Nonnull ptr,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer wysiwyg_composer_83c1_ComposerModel_get_link_action(
      void*_Nonnull ptr,
    RustCallStatus *_Nonnull out_status
    );
void ffi_wysiwyg_composer_83c1_ComposerUpdate_object_free(
      void*_Nonnull ptr,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer wysiwyg_composer_83c1_ComposerUpdate_text_update(
      void*_Nonnull ptr,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer wysiwyg_composer_83c1_ComposerUpdate_menu_state(
      void*_Nonnull ptr,
    RustCallStatus *_Nonnull out_status
    );
void*_Nonnull wysiwyg_composer_83c1_new_composer_model(
      
    RustCallStatus *_Nonnull out_status
    );
RustBuffer ffi_wysiwyg_composer_83c1_rustbuffer_alloc(
      int32_t size,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer ffi_wysiwyg_composer_83c1_rustbuffer_from_bytes(
      ForeignBytes bytes,
    RustCallStatus *_Nonnull out_status
    );
void ffi_wysiwyg_composer_83c1_rustbuffer_free(
      RustBuffer buf,
    RustCallStatus *_Nonnull out_status
    );
RustBuffer ffi_wysiwyg_composer_83c1_rustbuffer_reserve(
      RustBuffer buf,int32_t additional,
    RustCallStatus *_Nonnull out_status
    );

/* -*- C++ -*- */
#pragma once
/**
* @file flashText.h
* @brief menu item component, provides flash stored text
*/

#include <menu.h>

// namespace Menu {
  using ConstText=const char[];

  template<typename T,T* text,typename I=Empty>
  struct FlashText:public I {
    using I::I;
    using I::size;
    template<typename Out,Roles role=Roles::Raw,bool toPrint=true>
    inline void print(Out& out) {
      out.template print<const __FlashStringHelper *,Out,toPrint>(reinterpret_cast<const __FlashStringHelper *>(text[0]),out,role);
    }
  };
// };

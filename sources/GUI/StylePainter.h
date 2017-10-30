#pragma once

#include <imgui.h>
#include <map>
#include <string>

class StylePainter
{
  public:
    
    StylePainter();
    ~StylePainter();
    
    void    PaintDataWindow();
    void    PaintAdjustmentWindow();
    void    PaintMainMenuBar();
    
  private:
    
    std::map<std::string, ImVec4>   m_colors;
};
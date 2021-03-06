#ifndef BRIDGE_ALPHA_PC_MESSAGER_BASE_H
#define BRIDGE_ALPHA_PC_MESSAGER_BASE_H

#include "messager.h"
namespace alpha {
class PCMessagerBase : public Messager {
 public:
  void PlaySound() override;
  void DrawShape() override;
  void WriteText() override;
  void Connect() override;
};
}  // namespace alpha

#endif
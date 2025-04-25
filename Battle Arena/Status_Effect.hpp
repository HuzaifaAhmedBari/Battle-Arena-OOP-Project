#pragma once

#include <string>

enum class StatusEffect {
    None,
    Burn,
    Frozen,
    Vulnerable,
    Poison,
    Confused
};

inline std::string statusToString(StatusEffect effect) {
    switch (effect) {
        case StatusEffect::Burn: return "Burn";
        case StatusEffect::Frozen: return "Frozen";
        case StatusEffect::Vulnerable: return "Vulnerable";
        case StatusEffect::Poison: return "Poison";
        case StatusEffect::Confused: return "Confused";
        default: return "None";
    }
}

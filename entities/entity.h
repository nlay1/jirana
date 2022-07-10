/*
 * Entity.h defines an abstract class Entity
 */

#ifndef ENTITIES_ENTITY_H
#define ENTITIES_ENTITY_H

#include <string>

namespace entities
{
class Entity {
public:
    virtual std::string to_string() const = 0;
};
} // entity

#endif
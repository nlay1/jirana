/**
 *  To save or load contents from files for entities
 *  user, project and task
 */

#ifndef CORE_FILE_CONTROLLER_H
#define CORE_FILE_CONTROLLER_H

#include "../entities/entity.h"

#include <fstream>

namespace core
{

// static class
class FileController{
public:
    FileController() = delete;
    ~FileController() = delete;

    static void saveEntity(const entities::Entity& e) {
        std::fstream f("Project.txt");
        f << e.to_string();
    }
    static void load() {}

};

} // core

#endif // CORE_FILE_CONTROLLER_H

#pragma once
#include "FileWriter.h"

namespace core
{
    enum class file_types;

    class writer_factory
    {
    public:
        writer_factory() = default;

        writer_ptr create_writer(file_types type_to_write);
    };


} // namespace core
#pragma once
#include "FileReader.h"

namespace core
{
    enum class file_types;

    class reader_factory
    {
    public:
        reader_factory() = default;

        reader_ptr create_reader(file_types type_to_write);
    };

} // namespace core
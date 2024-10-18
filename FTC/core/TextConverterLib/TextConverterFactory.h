#pragma once
#include "TextConverter.h"

namespace core
{
    enum class file_types;

    class converter_factory
    {
    public:
        converter_factory() = default;

        converter_ptr create_converter(file_types type_to_convert);
    };

} // namespace core
#include "pch.h"
#include "CoreStructs.h"
#include "TextConverterFactory.h"

namespace core
{

    converter_ptr converter_factory::create_converter(
        file_types type_to_convert)
    {
        switch (type_to_convert)
        {
        case file_types::md:
            // TODO: create MD converter
            break;

        default:
            throw std::runtime_error("Unsupported file type.");
            break;
        }
    }

} // namespace core

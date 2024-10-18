#include "pch.h"
#include "CoreStructs.h"
#include "FileWriterFactory.h"

namespace core
{

    writer_ptr writer_factory::create_writer(
        file_types type_to_write)
    {
        switch (type_to_write)
        {
        case file_types::md:
            // TODO: create MD writer
            break;

        default:
            throw std::runtime_error("Unsupported file type.");
            break;
        }
    }

} // namespace core

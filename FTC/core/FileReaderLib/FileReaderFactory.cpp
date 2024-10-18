#include "pch.h"
#include "CoreStructs.h"
#include "FileReaderFactory.h"

namespace core
{

    reader_ptr reader_factory::create_reader(
        file_types type_to_write)
    {
        switch (type_to_write)
        {
        case file_types::word:
            // TODO: create Word reader
            break;

        default:
            throw std::runtime_error("Unsupported file type.");
            break;
        }
    }

} // namespace core

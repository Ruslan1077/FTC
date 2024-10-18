#pragma once
#include <memory>

namespace core
{

    struct file_reader
    {
        virtual ~file_reader() = default;

        // TODO: add methods
    };
    using reader_ptr = std::unique_ptr<file_reader>;

} // namespace core
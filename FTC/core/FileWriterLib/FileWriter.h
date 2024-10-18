#pragma once
#include <memory>

namespace core
{

    struct file_writer
    {
        virtual ~file_writer() = default;

        //TODO: add methods
    };
    using writer_ptr = std::unique_ptr<file_writer>;

} // namespace core
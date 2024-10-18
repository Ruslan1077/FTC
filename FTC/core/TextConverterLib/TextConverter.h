#pragma once
#include <memory>

namespace core
{

    struct text_converter
    {
        virtual ~text_converter() = default;

        // TODO: add methods
    };
    using converter_ptr = std::unique_ptr<text_converter>;

} // namespace core
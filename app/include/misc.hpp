#ifndef MISC_HPP
#define MISC_HPP

#include <app.hpp>
#include <spdlog/spdlog.h>

// Return a reasonable mime type based on the extension of a file.
boost::beast::string_view
mime_type(boost::beast::string_view path);

// Append an HTTP rel-path to a local filesystem path.
// The returned path is normalized for the platform.
std::string
path_cat(
    boost::beast::string_view base,
    boost::beast::string_view path);

void fail(boost::system::error_code ec, char const* what);

#endif
#ifndef LISTENER_HPP
#define LISTENER_HPP

#include <app.hpp>

// Accepts incoming connections and launches the sessions
class listener : public std::enable_shared_from_this<listener>
{
    tcp::acceptor acceptor_;
    tcp::socket socket_;
    std::shared_ptr<std::string const> doc_root_;

public:
    listener(
        boost::asio::io_context& ioc,
        tcp::endpoint endpoint,
        std::shared_ptr<std::string const> const& doc_root);

    // Start accepting incoming connections
    void run();

    void do_accept();

    void on_accept(boost::system::error_code ec);
};


#endif //LISTENER_HPP

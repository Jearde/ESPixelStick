#ifndef PAGE_ROOT_H
#define PAGE_ROOT_H

const char PAGE_ROOT_PIXEL[] PROGMEM = R"=====(
<strong>ESPixelStick</strong> <hr> <a href="config/net.html" style="width:250px" class="btn btn--m btn--blue">Network Configuration</a><br> <a href="config/pixel.html" style="width:250px" class="btn btn--m btn--blue">Pixel Configuration</a><br> <a href="admin.html" style="width:250px" class="btn btn--m btn--blue">Administration</a><br> <a href="status/net.html" style="width:250px" class="btn btn--m btn--blue">Network Status</a><br> <a href="status/e131.html" style="width:250px" class="btn btn--m btn--blue">E1.31 Status</a><hr> <pre id="name"></pre> <script>setValues("/rootvals");</script>
)=====";

const char PAGE_ROOT_SERIAL[] PROGMEM = R"=====(
<strong>ESPixelStick</strong> <hr> <a href="config/net.html" style="width:250px" class="btn btn--m btn--blue">Network Configuration</a><br> <a href="config/serial.html" style="width:250px" class="btn btn--m btn--blue">Serial Configuration</a><br> <a href="admin.html" style="width:250px" class="btn btn--m btn--blue">Administration</a><br> <a href="status/net.html" style="width:250px" class="btn btn--m btn--blue">Network Status</a><br> <a href="status/e131.html" style="width:250px" class="btn btn--m btn--blue">E1.31 Status</a><hr> <pre id="name"></pre> <script>setValues("/rootvals");</script>
)=====";

void send_root_vals() {
    String values = "";
    values += "name|div|" + (String)config.name + "\n";
    values += "title|div|" + String("ESPS - ") + (String)config.name + "\n";
    web.send(200, PTYPE_PLAIN, values);
}
#endif

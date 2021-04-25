# dz65rgb v2 my custom keymap

My custom keymap for the dz65rgb v2 keyboard firmware. Includes via support, changed default keymap for my keyboards layout and changed default startup rgb effects.

```
sudo apt install -y  python3-pip
python3 -m pip install --user qmk
echo 'PATH="$HOME/.local/bin:$PATH"' >> $HOME/.bashrc && source $HOME/.bashrc
source $HOME/.bashrc
qmk clone
mv siksniraps qmk_firmware/keyboards/dztech/dz65rgb/keymaps
cd qmk_firmware
qmk setup
qmk compile -kb dztech/dz65rgb/v2 -km siksniraps      # output will be .build/dztech_dz65rgb_v2_siksniraps.hex
```

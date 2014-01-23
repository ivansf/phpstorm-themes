<?php if (!empty($title)): ?>
	<h3><?php print $title; ?></h3>
<?php endif; ?>
<?php $count = 0 ?>
<?php foreach ($rows as $id => $row): ?>
	<div<?php if ($classes_array[$id]) { print ' class="' . $classes_array[$id] .'"';  } ?>>
		<?php print $row; ?>
	</div>
	<?php $count++; ?>
	<?php if ($count >=4): ?>
		<div class="views-row">
			<div class="ad">
				<script type="text/javascript"><!--
					google_ad_client = "ca-pub-0619816986353921";
					/* phpStorm Themes */
					google_ad_slot = "6064800945";
					google_ad_width = 336;
					google_ad_height = 280;
					//-->
				</script>
				<script src="http://pagead2.googlesyndication.com/pagead/show_ads.js" type="text/javascript"></script>
			</div>
		</div>
		<?php $count=0 ?>
	<?php endif; ?>
<?php endforeach; ?>